@class WAProfileLogicController, NSString, WAMenuAboveHeaderView, WAMenuHeaderView;

@interface WAMenuScrollActionSheet : MMScrollActionSheet

@property (copy, nonatomic) NSString *userName;
@property (nonatomic) BOOL needPreferredActionInReloadAnimation;
@property (retain, nonatomic) WAMenuAboveHeaderView *topView;
@property (retain, nonatomic) WAMenuHeaderView *headerView;
@property (retain, nonatomic) WAProfileLogicController *profileLogicController;
@property (nonatomic) unsigned long long source;
@property (nonatomic) BOOL highlightGameRewardsWhenAppear;

- (id)initWithUserName:(id)a0;
- (void)preferredActionInReloadAnimation;
- (void)dismissAnimated:(BOOL)a0;
- (void)relayoutForUpdate;
- (void)layoutTopView;
- (void)onTopViewTaped;
- (void)tryUpdateData:(id)a0;
- (void)updatePageInfo;
- (void)configHeaderView:(id)a0 withCommentInfo:(id)a1 withoutRecommendModule:(BOOL)a2;
- (void)configHeaderView:(id)a0 withActivityInfo:(id)a1;
- (id)bottomPadddingViewBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (void).cxx_destruct;

@end
