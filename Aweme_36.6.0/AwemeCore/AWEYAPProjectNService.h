@class NSString;

@interface AWEYAPProjectNService : HTSService <AWEYAPProjectNService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isNFCScheme:(id)a0;
- (id)transferNFCUniversalLinkToScheme:(id)a0;
- (BOOL)isHitNFCUniversalLink:(id)a0;
- (BOOL)isHitNFCActivity:(id)a0;
- (BOOL)handleNFCURLString:(id)a0 originDeeplinkURL:(id)a1 isColdLaunch:(BOOL)a2;
- (BOOL)handleNFCURLString:(id)a0 coldLaunchOptions:(id)a1;
- (void)startNFCPreRequestIfNeed:(id)a0 coldLaunchOptions:(id)a1;
- (void)insertNetworkOptimizeOptionsIfNeed;
- (void)gotoNFCDefaultPage:(id)a0;
- (BOOL)enableNFCLaunchOptimize;
- (void)beginNFCScanAfterAppLaunch;
- (BOOL)isInNFCColdLaunchProgress;

@end
