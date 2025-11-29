@protocol IESECBuyNowEventsDelegate;

@interface IESECBuyNowEventImpl : NSObject

@property (weak, nonatomic) id<IESECBuyNowEventsDelegate> eventHandler;

- (void)selfUpdateCommonEventParamsWithEventData:(id)a0;
- (void)selfPayAndCheckWithEventData:(id)a0;
- (void)selfOpenSchemaWithEventData:(id)a0;
- (void)selfPublishEventWithEventData:(id)a0;
- (void)selfSubmitWithEventData:(id)a0;
- (void)selfJSBridgeWithEventData:(id)a0;
- (void)selfDouyinVerifyWithEventData:(id)a0;
- (void)selfFaceAuthWithEventData:(id)a0;
- (void)selfValidateWithEventData:(id)a0;
- (void)selfScrollOverKeyboardWithEventData:(id)a0;
- (void)selfSubmitBtnClickWithEventData:(id)a0;
- (void)selfToggleSubmitWithEventData:(id)a0;
- (void)selfExposePayCashierBarWithEventData:(id)a0;
- (void)selfTrackerWithEventData:(id)a0;
- (void)selfScrollItemToCenterWithEventData:(id)a0;
- (void)selfOpenMaskLayerWithEventData:(id)a0;
- (void)selfCloseMaskLayerWithEventData:(id)a0;
- (void)selfCrossTriggerWithEventData:(id)a0;
- (void)selfSaveRenderNodeWithEventData:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)initWithEventHandler:(id)a0;

@end
