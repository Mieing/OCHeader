@class AWEAwemeModel, UIView, NSString, CAAnimationGroup, UIImageView, UIButton, UILabel, CAKeyframeAnimation;

@interface AWENearbyCardLiveHeaderView : UIView <AWEUserMessage>

@property (retain, nonatomic) UIView *liveInLoop;
@property (retain, nonatomic) UIView *liveOutLoop;
@property (retain, nonatomic) UIImageView *headerView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *desLabel;
@property (retain, nonatomic) UIButton *followBtn;
@property (retain, nonatomic) CAAnimationGroup *loopAnimation;
@property (retain, nonatomic) CAKeyframeAnimation *headAnimation;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)unfollowUser:(id)a0;
- (void)followUser:(id)a0;
- (void)onLiveStreamFinish;
- (BOOL)isFollow:(id)a0;
- (void)enterUserPage;
- (void)onFollow;
- (id)showText:(long long)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)init;
- (void)dealloc;
- (void)setupUI;
- (void)addObservers;
- (void)removeObservers;

@end
