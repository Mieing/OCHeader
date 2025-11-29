@class UIView, NSString, AWEPOICollectObject, AWEPOIDetailStore, AWEGradientView, UIImageView, AWEPOIDetailResponse, UIButton, UILabel;
@protocol AWEPOIDetailInfoSimilarPOIShareDelegate;

@interface AWEPOIDetailInfoSimilarPOIShareViewModel : AWEPOIDetailInfoBaseViewModel

@property (retain, nonatomic) AWEPOIDetailResponse *poiDetail;
@property (retain, nonatomic) AWEPOIDetailStore *store;
@property (copy, nonatomic) NSString *poiID;
@property (retain, nonatomic) AWEPOICollectObject *collectObject;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEGradientView *topBannerView;
@property (retain, nonatomic) UILabel *topBannerTitleLabel;
@property (retain, nonatomic) UIImageView *topBannerTitleArrowView;
@property (retain, nonatomic) UIImageView *atmosBGView;
@property (retain, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) UIView *avatarViews;
@property (weak, nonatomic) id<AWEPOIDetailInfoSimilarPOIShareDelegate> delegate;

+ (double)preferredHeightForDataModel:(id)a0 width:(double)a1 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 cellIdentifier:(id)a4;

- (void)setupViewModel;
- (void)p_createSubviewsIfNeed;
- (void)p_refreshDataWithCompletion;
- (void)p_didTapOnCollect;
- (void)p_setCollectCount:(long long)a0;
- (id)topBannerTextFromCollectConfig;
- (void)didTapToClose;
- (void)onTapShareAction;
- (void).cxx_destruct;
- (void)layoutAvatars;
- (void)updateWithModel:(id)a0;

@end
