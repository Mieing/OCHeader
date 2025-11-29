@class NSArray, UIImageView, NSString, UILabel, UIView, IESLiveAnimatedImageView;
@protocol IESLiveInteractUserModel, IESLiveWebPPlayer;

@interface IESLiveFastMatchEnterAnimationView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIImageView *matchAvatarImage;
@property (retain, nonatomic) UIView *matchLabelContainer;
@property (retain, nonatomic) UILabel *matchJoinLabel;
@property (retain, nonatomic) UILabel *matchLinkingLabel;
@property (retain, nonatomic) UILabel *matchNameLabel;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *matchGuideAnimationView;
@property (retain, nonatomic) IESLiveAnimatedImageView *seatingAnimationView;
@property (copy, nonatomic) NSArray *joinIconURLs;
@property (nonatomic) BOOL isShowingAnimation;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) id<IESLiveInteractUserModel> user;
@property (weak, nonatomic) UIView *avatarView;
@property (weak, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupFastMatchViews;
- (void)seatingViewStopWebPAnimatingAndClean;
- (void)seatingViewStartWithLoopCompletion:(id /* block */)a0;
- (void)cleanIfNeeded;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)stopAnimation;
- (void)startAnimationWithCompletion:(id /* block */)a0;

@end
