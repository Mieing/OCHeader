@class ACCPIPInteractionView, AWEVideoPublishViewModel, NSMutableArray, UIView;
@protocol IESServiceProvider;

@interface ACCPIPInteractionContainerView : UIView

@property (retain, nonatomic) NSMutableArray *interactionViews;
@property (retain, nonatomic) ACCPIPInteractionView *targetView;
@property (retain, nonatomic) ACCPIPInteractionView *lastTargetView;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) UIView *assistPoint;

- (void)reloadGestureViewsWithPublishViewModel:(id)a0 serviceProvider:(id)a1;
- (void)unSelectedAllViews;
- (BOOL)rectContainsPointAfterRotationWithObj:(id)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (void)replaceImageIfNeededWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldRespondWithGesture:(id)a0;
- (BOOL)shouldRespondReplaceImage:(id)a0;
- (void).cxx_destruct;
- (void)handleGesture:(id)a0;
- (void)reset;

@end
