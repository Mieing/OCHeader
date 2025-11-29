@class UIImageView, GetRealnameWordingRsp, UILabel, UIView, UIButton;
@protocol WCPaySelectVerifyTypeViewV2Delegate;

@interface WCPaySelectVerifyTypeViewV2 : UIView

@property (weak) id<WCPaySelectVerifyTypeViewV2Delegate> m_delegate;
@property (retain) UIView *baseGrowView;
@property (retain) UIView *growView;
@property (retain) UIView *headerView;
@property (retain) UIImageView *iconImageView;
@property (retain) UILabel *titleLabel;
@property (retain) UILabel *descLabel;
@property (retain) UIView *footerView;
@property (retain) UIButton *nextButton;
@property (retain) UIButton *footerTipsView;
@property (retain) UIImageView *footerTipsIcon;
@property (retain) UIButton *footerTipsButton;
@property (retain) UIImageView *footerTipsArrowIcon;
@property long long guideType;
@property (retain) GetRealnameWordingRsp *wording;
@property double minHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithGuideType:(long long)a0 wordingResp:(id)a1 minHeight:(double)a2 delegate:(id)a3;
- (void)updateView;
- (void)updateHeaderView;
- (void)updateIconImageView;
- (void)updateTitleLabel;
- (void)updateDescLabel;
- (void)updateFooterView;
- (void)updateNextButton;
- (void)updateFooterTipsView;
- (void)updateFooterTipsIcon;
- (void)updateFooterTipsButton;
- (void)updateFooterTipsArrowIcon;
- (void)clickSafeTips;
- (void)onClickNextButton;
- (void).cxx_destruct;

@end
