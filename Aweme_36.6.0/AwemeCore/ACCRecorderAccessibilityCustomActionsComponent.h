@class ACCRecorderAccessibilityCustomActionsView;
@protocol ACCRecorderViewContainer;

@interface ACCRecorderAccessibilityCustomActionsComponent : ACCFeatureComponent

@property (retain, nonatomic) ACCRecorderAccessibilityCustomActionsView *accessibilityCustomActionsView;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;

- (void)componentDidMount;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
