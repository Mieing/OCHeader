@class NSString;

@interface AWEAdWebCardMonitorUtility : HTSService <AWEAdWebCardMonitorUtility>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)liveWebCardReceiveMonitorWithAdInfo:(id)a0;
+ (void)webCardAdVideoShowWithModel:(id)a0;
+ (void)webCardPreloadStart:(id)a0;
+ (void)webCardPreloadResult:(long long)a0 model:(id)a1 failReason:(id)a2;
+ (void)webCardAdtraceTryShow:(id)a0;
+ (void)webCardAdShowResult:(long long)a0 model:(id)a1 failReason:(id)a2;
+ (BOOL)hasCardDataWithAweme:(id)a0;
+ (BOOL)shouldShowLynxCardWithAwemeModel:(id)a0;
+ (void)webCardReceiveMonitorWithModel:(id)a0;
+ (id)monitorAdExtraDataWithAweme:(id)a0;
+ (id)eventStringFromReferString:(id)a0;
+ (id)adRitFromReferString:(id)a0;


@end
