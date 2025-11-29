@class WCAdInteractionDeviceMotionContainer, NSString, WCAdCommonInteractionInfo, WCAdCommonInteractionView;
@protocol WCAdCommonInteractionLogicDelegate;

@interface WCAdCommonInteractionLogic : WCAdvertiseOperationLogicBase <WCAdInteractionDeviceMotionContainerDelegate>

@property (retain, nonatomic) WCAdCommonInteractionInfo *interactionInfo;
@property (retain, nonatomic) WCAdCommonInteractionView *interactionView;
@property (retain, nonatomic) WCAdInteractionDeviceMotionContainer *deviceMotionContainer;
@property (nonatomic) long long interactionState;
@property (weak, nonatomic) id<WCAdCommonInteractionLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getCommonInteractionLogicWithDataItem:(id)a0 scene:(unsigned long long)a1;

- (id)initWithInteractionInfo:(id)a0;
- (void)dealloc;
- (void)addNotificationObservers;
- (void)onWindowDidBecomeKey:(id)a0;
- (void)onViewWillResignActive:(id)a0;
- (void)onViewDidBecomeActive:(id)a0;
- (void)start;
- (void)stop;
- (void)update;
- (void)reset;
- (void)updateDeviceMotionState;
- (BOOL)isApplicationStateValid;
- (BOOL)isInteractionViewContainerVisible;
- (BOOL)isTimelineScene;
- (id)fetchRelatedDataItem;
- (unsigned long long)fetchRelatedItemScene;
- (id)fetchInteractionReportInfo;
- (void)updateShakeMaxGForceWithX:(double)a0 y:(double)a1;
- (void)reportShakeSucceedEvent;
- (void)deviceMotionAccelerationChangedWithX:(double)a0 y:(double)a1 z:(double)a2;
- (void).cxx_destruct;

@end
