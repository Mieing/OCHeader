@class IESECOrderListBaseViewController, NSMutableSet, NSMutableDictionary;

@interface IESECOrderBaseEventImpl : NSObject

@property (retain, nonatomic) NSMutableSet *onceKeys;
@property (retain, nonatomic) NSMutableDictionary *registedBridgeEventDict;
@property (weak, nonatomic) IESECOrderListBaseViewController *viewController;

- (void)selfDelayWithEventData:(id)a0;
- (void)selfOpenMaskLayerWithEventData:(id)a0;
- (void)selfCloseMaskLayerWithEventData:(id)a0;
- (void)selfQuitPageWithEventData:(id)a0;
- (void)selfScrollToPositionWithEventData:(id)a0;
- (void)selfTransformLocationWithEventData:(id)a0;
- (void)selfScrollToTopWithEventData:(id)a0;
- (void)reportErrorWithFunctionName:(id)a0 eventData:(id)a1;
- (void)processSaveTriggerWithEventData:(id)a0;
- (void)showContextMenuWithButtonList:(id)a0 fromView:(id)a1 node:(id)a2 arrowDirection:(unsigned long long)a3;
- (id)findRenderObjectByComponentId:(id)a0;
- (void)getRectInNextRunloop:(id)a0;
- (void)processPreloadWithEventData:(id)a0;
- (void)selfQueryWhenAppearWithEventData:(id)a0;
- (void)selfSaveNodeWithEventData:(id)a0;
- (void)selfSaveTriggerWithEventData:(id)a0;
- (void)selfOrderListTabbarExposeWithEventData:(id)a0;
- (void)selfUseBridgeWithEventData:(id)a0;
- (void)selfOrderShowMoreMenuWithEventData:(id)a0;
- (void)selfDoOnceWithEventData:(id)a0;
- (void)selfRegisterScrollStrategyWithEventData:(id)a0;
- (void)selfUpdateRawParamsWithEventData:(id)a0;
- (void)selfResetGuessYouLikeWithEventData:(id)a0;
- (void)selfUpdateCustomFieldsWithEventData:(id)a0;
- (void)selfRegisterBridgeEventWithEventData:(id)a0;
- (void)selfUnregisterBridgeEventWithEventData:(id)a0;
- (void)selfScrollMainListWithEventData:(id)a0;
- (void)selfControlFrequencyWithEventData:(id)a0;
- (void)selfJudgeFrequencyWithEventData:(id)a0;
- (void)selfAddPreloadTaskWithEventData:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;

@end
