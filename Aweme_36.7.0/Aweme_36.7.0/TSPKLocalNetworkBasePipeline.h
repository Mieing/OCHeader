@interface TSPKLocalNetworkBasePipeline : TSPKDetectPipeline

+ (BOOL)isEntryDefaultEnable;
+ (id)handleAPIAccess:(id)a0 networkAddress:(id)a1;
+ (id)dataType;

- (BOOL)deferPreload;

@end
