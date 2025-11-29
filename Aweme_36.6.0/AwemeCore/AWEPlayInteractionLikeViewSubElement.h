@class UIButton, NSString, LOTAnimationView, AWEFeedVideoButton, UIView, AWEPlayInteractionLikeElement;
@protocol AWEFeedVideoButtonProtocol, AWEPlayInteractionLikeViewDelegate;

@interface AWEPlayInteractionLikeViewSubElement : NSObject <AWEPlayInteractionLikeViewSubElementProtocol, AWERightElementButtonLayout>

@property (weak, nonatomic) id<AWEPlayInteractionLikeViewDelegate> delegate;
@property (weak, nonatomic) AWEPlayInteractionLikeElement *element;
@property (readonly, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEFeedVideoButton *likeButton;
@property (retain, nonatomic) LOTAnimationView *likeAnimationView;
@property (retain, nonatomic) LOTAnimationView *normalLikeAnimationView;
@property (nonatomic) long long bindStatusAtDisplay;
@property (nonatomic) BOOL isLightVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIButton<AWEFeedVideoButtonProtocol> *button;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)updateDiggCount;
- (void)viewDidChangeBreakPoint;
- (id)aAWEPlayInteractionAdapter;
- (void)_stopLikeAnimation;
- (void)_playLikeAnimation;
- (void)_playDislikeAnimation;
- (void)playLikeAnimation;
- (void)playDislikeAnimation;
- (id)initWithContainerElement:(id)a0;
- (void)setupPadElementSizeWithConfig:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })a0;
- (void)adaptJingXuanElementSizeWithConfig:(struct { double x0; double x1; double x2; double x3; double x4; })a0 type:(long long)a1;
- (void)updateAccesibilityLabel;
- (void)updateForNewMask;
- (BOOL)p_needShowFirstPostEncourage:(id)a0;
- (void)__setupNormalLike;
- (void)__setupLikeAndDislikeLottieView;
- (long long)getFirstVideoGuideThreshold;
- (void)trackLikeBirthday;
- (id)model;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)context;
- (void)updateUI;
- (void)addToParentView:(id)a0;

@end
