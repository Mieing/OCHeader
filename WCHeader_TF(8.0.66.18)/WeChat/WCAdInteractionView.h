@class NSArray, NSDictionary, WCAdInteractionContentView, NSMutableDictionary, NSString;
@protocol WCAdInteractionViewDelegate;

@interface WCAdInteractionView : MMUIView <WCAdInteractionContentViewDelegate, CAAnimationDelegate>

@property (retain, nonatomic) NSArray *events;
@property (retain, nonatomic) NSDictionary *resources;
@property (retain, nonatomic) NSDictionary *actions;
@property (retain, nonatomic) NSArray *determinationInfos;
@property (retain, nonatomic) WCAdInteractionContentView *baseContentView;
@property (retain, nonatomic) NSMutableDictionary *firedTimeEventCache;
@property (weak, nonatomic) id<WCAdInteractionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 interactionInfo:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)parseInteractionInfo:(id)a0;
- (void)showContentView;
- (void)hideContentView;
- (void)activeContentView;
- (void)suspendContentView;
- (void)terminateContentView;
- (void)onUpdateCurrentVideoTime:(double)a0;
- (void)clearAllCaches;
- (void)fireActionsForEventType:(unsigned long long)a0;
- (void)fireActionsForTimeEventWithInterval:(double)a0;
- (void)fireActionsForEventType:(unsigned long long)a0 subType:(unsigned long long)a1 determinationId:(id)a2 interval:(double)a3 params:(id)a4;
- (void)fireActionWithInfo:(id)a0 withParams:(id)a1;
- (void)drawWithInfo:(id)a0;
- (void)showOrUpdateResourceWithResource:(id)a0 action:(id)a1 toView:(id)a2 updateOnly:(BOOL)a3;
- (void)hideOrRemoveResourceWithResource:(id)a0 action:(id)a1 fromView:(id)a2 hide:(BOOL)a3;
- (id)fetchSubviewInView:(id)a0 byTag:(long long)a1;
- (id)fetchSubviewForResource:(id)a0;
- (void)appendAnimationForAction:(id)a0 fromView:(id)a1 completeBlock:(id /* block */)a2;
- (int)findMaxDurationForAction:(id)a0 fromView:(id)a1;
- (void)addAnimationWithInfo:(id)a0 toView:(id)a1 completeBlock:(id /* block */)a2;
- (void)addKeyframeAnimationWithInfo:(id)a0 toView:(id)a1 completeBlock:(id /* block */)a2;
- (void)addSimpleAnimationWithInfo:(id)a0 toView:(id)a1 completeBlock:(id /* block */)a2;
- (void)operateGestureWithInfo:(id)a0;
- (void)updateGestureForResource:(id)a0 withAction:(id)a1;
- (void)operateProgressWithInfo:(id)a0 withPercent:(double)a1;
- (void)operateActivityWithInfo:(id)a0;
- (void)operateReportWithInfo:(id)a0 params:(id)a1;
- (void)fireDeterminationWithResourceId:(id)a0 forType:(unsigned long long)a1 params:(id)a2;
- (id)fetchContentReportInfo;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)fetchResourceInfoWithResourceId:(id)a0;
- (id)fetchDeterminationInfoWithResourceId:(id)a0;
- (void)contentViewBeClickedWithResourceId:(id)a0;
- (void)deviceMotionOrientationChangedWithXAngle:(double)a0 yAngle:(double)a1 zAngle:(double)a2;
- (void)deviceMotionAccelerationChangedWithX:(double)a0 y:(double)a1 z:(double)a2;
- (void).cxx_destruct;

@end
