@class AWEAwemeModel, UIView, NSString, UIImageView, AWEFeedVideoTagView, AWEModernFeedPlayVideoViewController, YYLabel, UILabel;
@protocol AWEAwemePlayInteractionRouterProtocol, AWEModernFeedCellContext, AWEAwemePlayInteractionInteractorProtocol;

@interface AWEModernFeedVideoCellController : UIViewController <AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (readonly, nonatomic) UIView *videoView;
@property (retain, nonatomic) AWEModernFeedPlayVideoViewController *videoController;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIView *userInfoView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UIImageView *likeIconView;
@property (retain, nonatomic) UILabel *likeCountLabel;
@property (retain, nonatomic) AWEFeedVideoTagView *tagView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UILabel *xiguaVideoTagLabel;
@property (retain, nonatomic) UIView *adTagView;
@property (retain, nonatomic) UILabel *adTagLabel;
@property (nonatomic) BOOL shouldUpdatePlayer;
@property (nonatomic) BOOL shouldPreventResign;
@property (retain, nonatomic) id<AWEAwemePlayInteractionRouterProtocol> router;
@property (retain, nonatomic) id<AWEAwemePlayInteractionInteractorProtocol> interactor;
@property (copy, nonatomic) NSString *adEventName;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long searchFeedVideoType;
@property (retain, nonatomic) Class cardClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (BOOL)supportsDoubleColumnLayout;
+ (void)__awe__codeRunnerRun___LINE__;
+ (double)adjustedPreferredMaxWidthWithWidth:(double)a0;
+ (id)attributedContentWithModel:(id)a0;
+ (BOOL)isAdButNotDouPlusVideo:(id)a0;
+ (id)makeContentLabel;
+ (id)tmpLabel;
+ (id)displayDescriptionWithAwemeModel:(id)a0;
+ (id)contentAttributes;

- (void)buildViews;
- (void)didEndShowing;
- (void)updateWithReferString:(id)a0;
- (void)didStartShowing;
- (void)didBecomeActiveForReason:(unsigned long long)a0;
- (void)didResignActiveForReason:(unsigned long long)a0;
- (void)updateWithAdEventName:(id)a0;
- (void)updateForAd;
- (id)getTagIdForHashtag:(id)a0;
- (void)trackShowForRealVisible;
- (void)didBeingSelected;
- (void)userInfoTapped:(id)a0;
- (BOOL)extraInfoClickable;
- (BOOL)hasVideoTag;
- (void)mutePlayerIfNeeded;
- (void)updateVideoPlayerIfNeeded;
- (void)trackAdClickEventWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (id)initWithContext:(id)a0;
- (id)transitionContext;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldAutoPlay;
- (void)updateWithModel:(id)a0;
- (BOOL)shouldMute;

@end
