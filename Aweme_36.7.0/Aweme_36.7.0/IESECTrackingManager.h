@interface IESECTrackingManager : NSObject

+ (BOOL)registerBtmPage:(id)a0 params:(id /* block */)a1;
+ (id)getPageIdFromBtm:(id)a0;
+ (void)markResponderAsBtmPage:(id)a0;
+ (id)createJumpSourceBtmTokenWithBtm:(id)a0 host:(id)a1 bcm:(id)a2;
+ (BOOL)registerBtmPage:(id)a0 pageBtm:(id)a1 sourceBtmToken:(id)a2;
+ (BOOL)updateBtmPage:(id)a0 sourceBtmToken:(id)a1;
+ (id)createReportParamsWithBtm:(id)a0 host:(id)a1;
+ (void)trackEvent:(id)a0 params:(id)a1 btm:(id)a2 host:(id)a3;
+ (BOOL)setBcmPageParams:(id)a0 host:(id)a1 clearOldValue:(BOOL)a2;
+ (id)getBcmChainWithHost:(id)a0 chainLength:(unsigned long long)a1;
+ (id)getBcmChainWithStandardContentWithHost:(id)a0 chainLength:(unsigned long long)a1;
+ (id)getBcmChainWithStandardContentWithBtmModel:(id)a0 chainLength:(unsigned long long)a1;
+ (id)hybirdResponderForContainerID:(id)a0;
+ (Class)serviceImpl;

@end
