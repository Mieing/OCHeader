@class NSString, UIImageView, UILabel, UIView, UIButton;
@protocol WCPayBindCardConfirmViewDelegate;

@interface WCPayBindCardConfirmView : UIView

@property (retain) UIView *headerView;
@property (retain) UIImageView *iconImageView;
@property (retain) UILabel *titleLabel;
@property (retain) UILabel *descLabel;
@property (retain) UIView *footerView;
@property (retain) UIButton *confirmButton;
@property (retain) UIButton *refuseButton;
@property double minHeight;
@property (weak) id<WCPayBindCardConfirmViewDelegate> m_delegate;
@property (retain) NSString *desc;

- (void)updateDelegate:(id)a0;
- (void)updateMinHeight:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateHeaderView;
- (void)updateIconView;
- (void)updateTitleView;
- (void)updateDescView;
- (void)updateFooterView;
- (void)updateConfirmView;
- (void)updateRefuseView;
- (void)onClickConfirmButton;
- (void)onClickRefuseButton;
- (void).cxx_destruct;

@end
