@class UIImageView, UILabel, DUXBasicButton;
@protocol AWEPLVRefreshButtonDelegate;

@interface AWEPLVRefreshButton : UIView

@property (nonatomic) long long buttonType;
@property (weak, nonatomic) id<AWEPLVRefreshButtonDelegate> delegate;
@property (retain, nonatomic) DUXBasicButton *button;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *label;

- (void)updateViewWithButtonType:(long long)a0;
- (void)onRefreshBtnClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupView;

@end
