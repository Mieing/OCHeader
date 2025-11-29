@class WCPayWebImageView, UIButton, MMUIActivityIndicatorView, FollowCardBDMchInfo, MMUILabel;
@protocol WCPayMchFavViewDelegate;

@interface WCPayMchFavView : UIView

@property (weak, nonatomic) id<WCPayMchFavViewDelegate> delegate;
@property (retain, nonatomic) FollowCardBDMchInfo *mchInfo;
@property (retain, nonatomic) WCPayWebImageView *mchLogoImgView;
@property (retain, nonatomic) WCPayWebImageView *mchLogoSelectedImgView;
@property (retain, nonatomic) MMUILabel *followTipsLabel;
@property (retain, nonatomic) UIButton *coverBtn;
@property (retain, nonatomic) MMUIActivityIndicatorView *indicatorView;

- (id)initWithFollowMchInfo:(id)a0 delegate:(id)a1;
- (void)updateMchFavViewWithSelectState:(BOOL)a0;
- (void)coverBtnClick;
- (void)startLoading;
- (void).cxx_destruct;

@end
