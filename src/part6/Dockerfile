FROM nginx:latest

COPY ./run.sh /run.sh
COPY ./nginx.conf /etc/nginx/nginx.conf

RUN \
touch /var/run/nginx.pid && \
chown -R nginx:nginx /var/run/nginx.pid && \
chown -R nginx:nginx /var/log/nginx && \
chown -R nginx:nginx /var/cache/nginx && \
chmod +x /run.sh

USER nginx
HEALTHCHECK NONE
ENTRYPOINT ["./run.sh"]