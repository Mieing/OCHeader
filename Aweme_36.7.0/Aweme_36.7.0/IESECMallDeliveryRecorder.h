@class NSMutableDictionary, NSDictionary, NSString, AWEECMallDeliveryInfo;
@protocol IESECDeliveryMallVisibleDelegate;

@interface IESECMallDeliveryRecorder : NSObject <IESECMallDeliveryRecorderProtocol>

@property (retain, nonatomic) AWEECMallDeliveryInfo *currentDelivery;
@property (retain, nonatomic) NSMutableDictionary *currentDeliveryTimeMap;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) NSDictionary *deliveryStrategyConfig;
@property (nonatomic) double deliveryinvalidTimeGap;
@property (nonatomic) double lastDeliveryTime;
@property (copy, nonatomic) NSString *lastSessionId;
@property (weak, nonatomic) id<IESECDeliveryMallVisibleDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)addDeliveryStrategyConfig:(id)a0;
- (void)setMallDelegate:(id)a0;
- (void)addDeliveryInfo:(id)a0 sessionId:(id)a1;
- (void)notiDeliverySuccess:(id)a0;
- (void)notiDeliveryFailWithCode:(long long)a0 sessionId:(id)a1;
- (void)addStage:(id)a0 sessionId:(id)a1 deliveryParams:(id)a2;
- (void)notiDeliveryTTI:(id)a0 sessionID:(id)a1;
- (void)sendDeliveryEnd;
- (void)initCurrentDelivery:(id)a0 sessionId:(id)a1;
- (void)sendDeliveryAction:(id)a0;
- (void)startAction:(id)a0 sessionId:(id)a1;
- (void)endAction:(id)a0 sessionId:(id)a1;
- (id)getDeliveryRecord:(id)a0;
- (void)notiMallDisappear;
- (void).cxx_destruct;

@end
