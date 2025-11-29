@class IESECOptions, NSMutableSet;
@protocol IESECUtilsAbilityProtocol, IESECSliceAbilityProtocol, IESECYataCommonAbilityProtocol, IESECOperationAbilityProtocol, IESECTrackAbilityProtocol, IESECUiAbilityProtocol, IESECTimerAbilityProtocol, YataInstanceInterface, IESECYataAbilityProtocol;

@interface IESECYataCommonBusiness : NSObject

@property (retain, nonatomic) id<YataInstanceInterface> yataInstance;
@property (retain, nonatomic) id<IESECYataCommonAbilityProtocol> abilities;
@property (retain, nonatomic) IESECOptions *options;
@property (retain, nonatomic) id<IESECYataAbilityProtocol> yataAbility;
@property (retain, nonatomic) id<IESECOperationAbilityProtocol> operationAbility;
@property (retain, nonatomic) id<IESECTimerAbilityProtocol> timerAbility;
@property (retain, nonatomic) id<IESECTrackAbilityProtocol> trackerAbility;
@property (retain, nonatomic) id<IESECUiAbilityProtocol> uiAbility;
@property (retain, nonatomic) id<IESECUtilsAbilityProtocol> utilsAbility;
@property (retain, nonatomic) id<IESECSliceAbilityProtocol> sliceAbility;
@property (retain, nonatomic) id eventImpl;
@property (retain, nonatomic) NSMutableSet *onceKeys;

+ (unsigned long long)positionWithString:(id)a0;

- (void)selfDelayWithEventData:(id)a0;
- (void)selfQuitPageWithEventData:(id)a0;
- (void)selfMultiRegexCheckWithEventData:(id)a0;
- (void)selfRegexCheckWithEventData:(id)a0;
- (void)selfLoadingWithEventData:(id)a0;
- (void)selfReadFieldAndTriggerWithEventData:(id)a0;
- (void)selfOpenDialogWithEventData:(id)a0;
- (void)selfCloseDialogWithEventData:(id)a0;
- (void)selfTTPayWithEventData:(id)a0;
- (void)selfScrollToPositionWithEventData:(id)a0;
- (void)selfScrollComponentToPositionWithEventData:(id)a0;
- (void)selfTransformLocationWithEventData:(id)a0;
- (id)initWithYataInstance:(id)a0 Abilities:(id)a1 options:(id)a2;
- (void)injectEventImpl:(id)a0;
- (void)selfDoOnceWithEventData:(id)a0;
- (void)selfScrollItemToPositionWithEventData:(id)a0;
- (void)selfSendEventWithEventData:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
