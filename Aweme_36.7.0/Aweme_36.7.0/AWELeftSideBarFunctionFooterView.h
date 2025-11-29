@class DUXButton, AWELeftSideBarFunctionFooterContentView;
@protocol AWELeftSideBarFunctionFooterViewDelegate;

@interface AWELeftSideBarFunctionFooterView : UIView

@property (retain, nonatomic) DUXButton *backgroundButton;
@property (retain, nonatomic) AWELeftSideBarFunctionFooterContentView *contentView;
@property (weak, nonatomic) id<AWELeftSideBarFunctionFooterViewDelegate> delegate;
@property (readonly, nonatomic) long long viewStyle;

+ (double)footerViewHeightWithViewStyle:(long long)a0;

- (void)initView;
- (void)updateIconImageWithUrl:(id)a0;
- (void)updateViewStyle:(long long)a0;
- (void)initBackgroundButton;
- (void)initContentView;
- (void)onClickBackgroundButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setBadgeHidden:(BOOL)a0;
- (void)updateLabelText:(id)a0;

@end
