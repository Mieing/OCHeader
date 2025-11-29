@class AWEAwemeModel, UIView, NSString, UIImageView, UIButton, CAGradientLayer, UILabel, AWESearchVideoView;
@protocol CachalotRenderPipelineComponentViewModel, AWEModernFeedCellContext;

@interface AWESearchAIGCVideoView : UIViewController <AWEModernFullscreenTransitionOuterContextProvider, AWESearchVideoViewPlayerDelegate, AWESearchCachalotCardViewProtocol, AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) AWESearchVideoView *videoView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) UIImageView *likeImageView;
@property (retain, nonatomic) UILabel *likeNumberLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIButton *operateButton;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) UIView *videoMaskView;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (retain, nonatomic) CAGradientLayer *bottomLayer;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cardClass;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (id)enterFrom;
- (id)searchId;
- (id)searchResultId;
- (id)modernTransitionContext;
- (id)searchKeyword;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithToContext:(id)a0;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)a0;
- (id)logPb;
- (id)showStringFromNumber:(id)a0;
- (id)listItemId;
- (id)imprId;
- (void)addNoti;
- (void)componentPageViewWillAppear:(BOOL)a0;
- (void)componentPageViewDidDisappear:(BOOL)a0;
- (void)componentWillDisplay;
- (void)componentDidEndDisplay;
- (id)componentLogData;
- (id)subResult;
- (id)listResultType;
- (void)checkVideoStatusWithAwemeIDList:(id)a0 completion:(id /* block */)a1;
- (id)searchThirdItemId;
- (void)singleTapVideo:(id)a0;
- (void)operateButtonClick:(id)a0;
- (void)voiceBroadcastStartNoti;
- (void)updateVideoWidth;
- (long long)aladdinRank;
- (id)secondSubResult;
- (void)trackerVideoClick;
- (void)trackerVideoOperate:(BOOL)a0;
- (void)trackerVideoShow;
- (long long)rank;
- (void).cxx_destruct;
- (void)pause;
- (void)viewDidLayoutSubviews;
- (id)initWithContext:(id)a0;
- (void)didEnterBackground;
- (id)entityType;
- (void)viewDidLoad;
- (id)componentView;
- (id)tokenType;
- (void)didStart;
- (void)updateWithViewModel:(id)a0;
- (void)didPause;
- (void)createUI;

@end
