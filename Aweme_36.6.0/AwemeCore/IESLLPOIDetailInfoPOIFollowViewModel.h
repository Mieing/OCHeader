@class UIView, NSString, IESLLGradientView, UIImageView, UIButton, LLDitoPageContext, IESLLPOIDetailStore, IESLLPOIDetailResponse, UILabel;
@protocol IESLLPOIDetailInfoPOIFollowDelegate;

@interface IESLLPOIDetailInfoPOIFollowViewModel : IESLLPOIDetailInfoBaseViewModel

@property (retain, nonatomic) IESLLPOIDetailResponse *poiDetail;
@property (retain, nonatomic) IESLLPOIDetailStore *store;
@property (copy, nonatomic) NSString *poiID;
@property (nonatomic) BOOL hasTrackerShowLog;
@property (retain, nonatomic) IESLLGradientView *topBannerView;
@property (retain, nonatomic) UIView *avatarTapView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIImageView *certifiedIcon;
@property (retain, nonatomic) UIImageView *followBGView;
@property (retain, nonatomic) UIImageView *topBannerTitleArrowView;
@property (retain, nonatomic) UIButton *followButton;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *topBannerTitleLabel;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<IESLLPOIDetailInfoPOIFollowDelegate> delegate;

+ (double)preferredHeightForDataModel:(id)a0 width:(double)a1 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 cellIdentifier:(id)a4;

- (id)trackerParams;
- (void)p_createSubviewsIfNeed;
- (void)p_refreshDataWithCompletion;
- (id)p_topBannerTextFromCollectConfig;
- (void)p_didTapOnCollect;
- (void)p_didTapToClose;
- (void)p_didTapOnFollow;
- (void)p_didTapOnAvatar;
- (void)p_setCollectCount:(long long)a0;
- (void)p_refreshMerchantInfo;
- (void)p_trackerShowLog;
- (void)p_changeButtonSelected;
- (void)p_trackerFollowLog;
- (void)p_trackerClickCollectLog;
- (void)p_trackerCloseLog;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
