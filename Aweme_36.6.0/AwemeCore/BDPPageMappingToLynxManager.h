@class NSDictionary, NSMutableDictionary, NSString;

@interface BDPPageMappingToLynxManager : NSObject <BDPAPPFramePreloadProtocol>

@property (retain, nonatomic) NSDictionary *pageMappingToLynx;
@property (retain, nonatomic) NSMutableDictionary *pageConfig;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL inited;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startPreload;
+ (void)bootstrapLaunch;
+ (BOOL)isMappingPage:(id)a0;
+ (id)pathByRemoveQuery:(id)a0;
+ (id)sharedManager;

- (id)getCacheConfigWithPath:(id)a0;
- (void)getConfigWithPath:(id)a0 result:(id /* block */)a1;
- (id)getCurrentPageMappingToLynx;
- (id)pageMappingToLynxConfig;
- (void).cxx_destruct;
- (id)init;
- (void)updateConfig;

@end
