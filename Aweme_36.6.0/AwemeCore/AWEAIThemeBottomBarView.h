@class NSString, NSDictionary, AWEAwemeModel, UIView, UIButton;

@interface AWEAIThemeBottomBarView : UIView <AWEDetailBottomViewProtocol>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *duetButton;
@property (copy, nonatomic) NSDictionary *otherParams;
@property (copy, nonatomic) NSString *topicID;
@property (copy, nonatomic) NSString *topicName;
@property (copy, nonatomic) id /* block */ shootBlock;
@property (copy, nonatomic) id /* block */ collectBlock;
@property (copy, nonatomic) id /* block */ joinFlashMobBlock;
@property (copy, nonatomic) id /* block */ createFlashMobBlock;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIButton *collectButton;
@property (nonatomic) BOOL shouldStopScaleAnimation;
@property (nonatomic) BOOL canOpenDuetCamera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowBottomShootView:(id)a0 enterFrom:(id)a1;
+ (BOOL)shouldShowBottomShootView:(id)a0 enterFrom:(id)a1 model:(id)a2;

- (void)updateWithAweme:(id)a0;
- (void)handleActionSchema:(id)a0 trackParams:(id)a1;
- (void)trackDetailPageShootClickWithTopicName:(id)a0 isHalf:(BOOL)a1 isInner:(BOOL)a2;
- (void)configStyle:(id)a0 model:(id)a1 otherParams:(id)a2 buttonType:(id)a3;
- (void)configMusicDetailStyle:(id)a0;
- (void)configMvDetailStyle:(id)a0;
- (void)configEffectDetailStyle:(id)a0;
- (void)updateCollectStyleWithCollected:(BOOL)a0 animated:(BOOL)a1;
- (void)updateCollectStyleWithTitle:(id)a0 image:(id)a1 size:(long long)a2;
- (void)beginScaleAnimation;
- (void)updateFlowShootIcon:(id)a0 text:(id)a1;
- (void)duetButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
