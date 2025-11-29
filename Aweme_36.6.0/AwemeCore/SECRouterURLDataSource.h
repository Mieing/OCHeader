@class NSString, SECRouteTrace, SECStandardURL;

@interface SECRouterURLDataSource : NSObject <SECSourceURLDataSource> {
    SECRouteTrace *_router;
    NSString *_routerURLString;
    SECStandardURL *_routerURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRouter:(id)a0;
- (id)standardRefer;
- (id)relatedKeyPath:(id)a0;
- (id)rulerParamsForLog:(id)a0;
- (double)expireInterval;
- (id)extractorKey;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)params;
- (id)type;
- (id)eventType;
- (id)configManager;
- (void)setup;

@end
