@class NSNumber, UIImageView, UILabel, NSMutableArray, UIView;
@protocol IESLiveSubscription, IESLiveWebPPlayer;

@interface IESLiveInteractGoldenMicSeatElement : IESLiveInteractSeatElementBase

@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (retain, nonatomic) UIView *goldenMicAnimationContainer;
@property (retain, nonatomic) NSMutableArray *waitingAnimationArrays;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) UILabel *goldenMicLabel;
@property (retain, nonatomic) UIView *goldenMicTextView;
@property (retain, nonatomic) NSNumber *lastGoldenMicCount;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *goldenMicAnimation;

- (void)removeListener;
- (void)enlargeTypeDidChange;
- (void)elementMount;
- (void)elementUnmount;
- (void)resetGoldenMicContainer;
- (void)removeGoldenMicAnimationContainer;
- (void)setupGoldenMicAnimationContainer;
- (void)startGoldenMicAnimation:(id)a0;
- (void)stopGoldenMicAnimation;
- (id)createGoldenMicTextLable;
- (void).cxx_destruct;
- (void)setUserModel:(id)a0;
- (void)pushAnimation:(id)a0;
- (void)popAnimation;
- (void)setupListener;

@end
