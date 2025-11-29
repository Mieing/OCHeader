@class DUXInAppNotificationConfig, DUXInAppNotificationView, UITapGestureRecognizer;
@protocol DUXInAppNotificationViewDelegate;

@interface DUXInAppNotificationInteractiveComponentView : UIView

@property (retain, nonatomic) DUXInAppNotificationConfig *config;
@property (weak, nonatomic) DUXInAppNotificationView *parentInAppNotificationView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<DUXInAppNotificationViewDelegate> delegate;

- (void)updateWithConfig:(id)a0 andDelegate:(id)a1 andParentInAppNotificationView:(id)a2;
- (id)initWithConfig:(id)a0 andDelegate:(id)a1 andParentInAppNotificationView:(id)a2;
- (void)addViewWithConfig:(id)a0;
- (void)addButtonTouched;
- (void)generalButtonTouched:(id)a0;
- (id)buttonWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)arrowButton;

@end
