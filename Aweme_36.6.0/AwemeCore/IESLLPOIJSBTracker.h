@interface IESLLPOIJSBTracker : NSObject

+ (id)getBTMPageInfo:(id)a0;
+ (id)createJumpSourceBtmTokenWithBtm:(id)a0 host:(id)a1 bcm:(id)a2;
+ (void)setBcmPageParams:(id)a0 host:(id)a1 clearOldValue:(BOOL)a2;
+ (id)getBcmChainWithHost:(id)a0 chainLength:(unsigned long long)a1 isDomainStandard:(BOOL)a2;
+ (BOOL)registerBtmPage:(id)a0 pageBtm:(id)a1 sourceBtmToken:(id)a2 bcm:(id)a3;
+ (id)getVirtualSourceTokenWithBtm:(id)a0 host:(id)a1 bcm:(id)a2 btmStandData:(id)a3;
+ (id)createJumpSourceBtmTokenWithBtm:(id)a0 host:(id)a1 bcm:(id)a2 btmStandData:(id)a3;
+ (void)updateSourceTrace:(id)a0 pageParam:(id)a1 unitParam:(id)a2;
+ (id)getValidBTMResponder:(id)a0;
+ (void)trackEvent:(id)a0 params:(id)a1 btmInfo:(id)a2 bridgeModel:(id)a3;

@end
