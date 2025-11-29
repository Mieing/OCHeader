@class CoverInfo, WCPayCss, UIImageView, UIView, UILabel, UIButton;
@protocol WCPayQRCoverPageViewDelegate;

@interface WCPayQRCoverPageView : UIView

@property (retain) CoverInfo *coverInfo;
@property (retain) UIView *contentView;
@property (retain) UIView *topbarView;
@property (retain) UIImageView *topLeftIcon;
@property (retain) UILabel *topLeftTitle;
@property (retain) UIImageView *centerIcon;
@property (retain) UILabel *centerDescription;
@property (retain) UIView *footerView;
@property (retain) UIButton *firstButton;
@property (retain) UIButton *secondButton;
@property (retain) WCPayCss *css;
@property (weak) id<WCPayQRCoverPageViewDelegate> delegate;
@property double applyMashV2DesclabelHeight;
@property int saveNotifyType;
@property BOOL bottomCorner;
@property (nonatomic) BOOL hasMchQrcode;

- (id)initWithCoverInfo:(id)a0 delegate:(id)a1;
- (void)updateCoverInfo:(id)a0 hasMchQrcode:(BOOL)a1;
- (void)layoutSubviews;
- (void)updateContentView;
- (void)updateTopBarView;
- (void)updateTopLeftIcon;
- (void)updateTopLeftTitle;
- (void)updateCenterIcon;
- (void)updateCenterDescription;
- (id)generatePointView;
- (void)updateFooterView;
- (void)updateFirstButton;
- (void)updateSecondButton;
- (BOOL)shouldShowApplyMaskV2;
- (double)getDesvLabelHeight;
- (void)onClickFirstButton;
- (void)onClickSecondButton;
- (void).cxx_destruct;

@end
