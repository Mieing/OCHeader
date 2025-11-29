@class RichTextView, NSString, UIImageView, WCPayRealnameRegResp, UILabel, UIView, UIButton;
@protocol WCPayRealnameSuccessViewDelegate;

@interface WCPayRealnameSuccessView : UIView <ILinkEventExt>

@property (retain) UIView *headerView;
@property (retain) UIImageView *iconImageView;
@property (retain) UILabel *titleLabel;
@property (retain) UILabel *descLabel;
@property (retain) UIView *footerView;
@property (retain) UIButton *confirmButton;
@property (retain) UIButton *retryButton;
@property double minHeight;
@property (retain, nonatomic) RichTextView *bottomTitle;
@property (weak) id<WCPayRealnameSuccessViewDelegate> m_delegate;
@property (retain) NSString *title;
@property (retain) NSString *desc;
@property (retain) NSString *buttonTitle;
@property BOOL showRetry;
@property (retain, nonatomic) WCPayRealnameRegResp *viewData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void)updateRetryButton;
- (void)updateBottomTitle;
- (void)onClickConfirmButton;
- (void)onClickRetryButton;
- (BOOL)isPassportPageStyle;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
