@class NSString, AWEMultiAvatarView, NSTimer, UILabel, NSArray;

@interface AFDNewFriendWorkNoticeView : UIView <CAAnimationDelegate>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AWEMultiAvatarView *avatarView;
@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) id /* block */ performShowAnimationBlock;
@property (copy, nonatomic) id /* block */ performHideAnimationBlock;
@property (copy, nonatomic) id /* block */ performAvatarShowAnimationBlock;
@property (copy, nonatomic) id /* block */ performAvatarHideAnimationBlock;
@property (retain, nonatomic) NSTimer *autoHideTimer;
@property (retain, nonatomic) NSString *toastText;
@property (retain, nonatomic) NSArray *avatarArray;
@property (retain, nonatomic) AWEMultiAvatarView *cachedAvatarView;
@property (copy, nonatomic) id /* block */ readyToShowBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)setupAnimation;
- (void)startAutoHideIfNeeded;
- (id)initWithType:(unsigned long long)a0 text:(id)a1 avatarArray:(id)a2;
- (void)configWithNewAvatarArray:(id)a0 animated:(BOOL)a1;
- (void)setupCachedAvatarView;
- (void)setupAvatarChangeAnimation;
- (id)initWithText:(id)a0 avatarArray:(id)a1;
- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)hide;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (void)setupAvatarView;

@end
