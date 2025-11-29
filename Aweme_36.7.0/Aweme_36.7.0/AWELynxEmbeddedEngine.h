@class NSString, LynxViewGroup;

@interface AWELynxEmbeddedEngine : NSObject

@property (copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) LynxViewGroup *lynxViewGroup;
@property (copy, nonatomic) NSString *lynxGroupCacheKey;
@property (copy, nonatomic) NSString *URL;
@property (nonatomic) BOOL enableParallelLoad;
@property (nonatomic) BOOL enableEngineReuse;

- (id)getForestLynxResourceProviderWithUrl:(id)a0;
- (id)generateGlobalProps;
- (id)buildLynxGroupCache;
- (id)buildLynxViewGroup;
- (id)createLynxViewGroupEngine;
- (id)initWithUrl:(id)a0 sessionID:(id)a1;
- (void).cxx_destruct;

@end
