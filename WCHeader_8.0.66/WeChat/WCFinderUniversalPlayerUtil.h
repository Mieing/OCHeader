@interface WCFinderUniversalPlayerUtil : NSObject

+ (void)asyncGetMediaWrapWithJSON:(id)a0 scene:(int)a1 complectionBlock:(id /* block */)a2 errorCallBcakBlock:(id /* block */)a3;
+ (id)requestIDWithInfo:(id)a0;
+ (void)preloadMediaWithJSON:(id)a0 scene:(int)a1;
+ (long long)refreshInterval;
+ (void)setRefreshInterval:(long long)a0;

@end
