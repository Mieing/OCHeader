@class WCPayWebImageView, NSArray, NSString, UILabel, UIView;
@protocol WCRedEnvelopesWishingRecommendSkinViewDelegate;

@interface WCRedEnvelopesWishingRecommendSkinView : UIView

@property (retain, nonatomic) NSArray *recommendSkinList;
@property (retain, nonatomic) NSString *currentSkinURL;
@property (retain, nonatomic) WCPayWebImageView *currentSkinImageView;
@property (nonatomic) BOOL currentSkinIsWidgetSkin;
@property (weak, nonatomic) id<WCRedEnvelopesWishingRecommendSkinViewDelegate> delegate;
@property (retain, nonatomic) UILabel *m_leftAreaTitleLabel;
@property (retain, nonatomic) UILabel *m_rightAreaTitleLabel;
@property (retain, nonatomic) UIView *m_leftTitleView;
@property (retain, nonatomic) UIView *m_sepLineView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 recommendSkinList:(id)a1 currentSkinURL:(id)a2 currentSkinIsWidgetSkin:(BOOL)a3;
- (void)setupViews;
- (void)hideTitleLabel;
- (void)showTitleLabel;
- (void)onWCRedEnvelopesWishingRecommendSkinViewClickLeftArea;
- (void)onWCRedEnvelopesWishingRecommendSkinViewClickRightArea;
- (void).cxx_destruct;

@end
