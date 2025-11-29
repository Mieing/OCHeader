@interface AWEPayNFCLauncher : NSObject

+ (BOOL)isNFCScheme:(id)a0;
+ (id)transferNFCUniversalLinkToScheme:(id)a0;
+ (BOOL)isHitNFCUniversalLink:(id)a0;
+ (BOOL)isHitNFCActivity:(id)a0;
+ (BOOL)handleNFCURLString:(id)a0 originDeeplinkURL:(id)a1 isColdLaunch:(BOOL)a2;
+ (BOOL)handleNFCURLString:(id)a0 coldLaunchOptions:(id)a1;
+ (void)startNFCPreRequestIfNeed:(id)a0 coldLaunchOptions:(id)a1;
+ (void)insertNetworkOptimizeOptionsIfNeed;
+ (BOOL)enableNFCLaunchOptimize;
+ (BOOL)handleInnerNFCURLString:(id)a0 originDeeplinkURL:(id)a1;
+ (BOOL)couldHandleNFCURL;
+ (BOOL)checkActivityValid:(id)a0;
+ (BOOL)disableNFCActivityCheck;
+ (BOOL)checkLiteHtsURLValid:(id)a0;
+ (BOOL)isOptNewUniversalLink:(id)a0;
+ (id)p_transferNFCOptNewUniversalLinkToScheme:(id)a0;
+ (id)p_transferNFCOldUniversalLinkToScheme:(id)a0;
+ (id)optKeysDic;

@end
