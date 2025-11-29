@class DUXInAppNotificationInteractiveComponentView, UILabel, UIView, DUXInAppNotificationConfig;
@protocol DUXInAppNotificationViewDelegate;

@interface DUXInAppNotificationMainContentView : UIView

@property (retain, nonatomic) DUXInAppNotificationConfig *config;
@property (retain, nonatomic) UILabel *primaryTextLabel;
@property (retain, nonatomic) UILabel *secondaryTextLabel;
@property (retain, nonatomic) UIView *headerComponentView;
@property (retain, nonatomic) UIView *headerSubView;
@property (retain, nonatomic) DUXInAppNotificationInteractiveComponentView *interactiveComponentView;
@property (weak, nonatomic) UIView *parentInAppNotificationView;
@property (weak, nonatomic) id<DUXInAppNotificationViewDelegate> delegate;

- (void)updateWithConfig:(id)a0 andDelegate:(id)a1 andParentInAppNotificationView:(id)a2;
- (id)initWithConfig:(id)a0 andDelegate:(id)a1 andParentInAppNotificationView:(id)a2;
- (void)headerSubViewWithConfig:(id)a0;
- (void)updateContentConstraints;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
