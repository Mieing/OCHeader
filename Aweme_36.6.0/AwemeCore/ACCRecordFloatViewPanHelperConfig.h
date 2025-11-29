@class UIView;
@protocol UIGestureRecognizerDelegate, IESServiceProvider;

@interface ACCRecordFloatViewPanHelperConfig : NSObject

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<UIGestureRecognizerDelegate> gestureDelegate;
@property (weak, nonatomic) UIView *panView;
@property (nonatomic) BOOL needEdgeSnapping;
@property (nonatomic) BOOL avoidSideSlipPropPanel;
@property (copy, nonatomic) id /* block */ panEndedBlock;

- (void).cxx_destruct;

@end
