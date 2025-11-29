@class NSDictionary, NSMutableDictionary, NSString;
@protocol IESLiveTracker;

@interface IESLiveGiftPanelEventServiceIMP : IESLiveGeneralBaseService <IESLiveGiftPanelEventService>

@property (retain, nonatomic) NSMutableDictionary *giftShowInfoAggregationMap;
@property (retain, nonatomic) NSMutableDictionary *giftSendInfoAggregationMap;
@property (weak, nonatomic) id<IESLiveTracker> tracker;
@property (nonatomic) BOOL enableAggregation;
@property (retain, nonatomic) NSDictionary *showEventLimitMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (unsigned long long)supportType;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)trackPanelEvent:(id)a0 params:(id)a1;
- (void)reportPanelEventWhenOutRoom;
- (BOOL)checkRecordConditionWithPageType:(long long)a0;
- (void)recordGiftSendEventWithPageType:(id)a0 giftId:(id)a1 count:(long long)a2 diamond:(long long)a3 isFirstScreen:(BOOL)a4;
- (void)recordGiftShowEventWithPageType:(id)a0 giftId:(id)a1 isFirstScreen:(BOOL)a2;
- (void).cxx_destruct;

@end
