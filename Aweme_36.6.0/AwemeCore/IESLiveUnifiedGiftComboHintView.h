@class CAGradientLayer, NSArray, UIImageView, IESLiveCountTimer, UIView, HTSLiveArtTextLabel;
@protocol IESLiveUnifiedGiftComboHintDelegate;

@interface IESLiveUnifiedGiftComboHintView : UIView

@property (weak, nonatomic) id<IESLiveUnifiedGiftComboHintDelegate> delegate;
@property (retain, nonatomic) UIView *comboNumberContainer;
@property (retain, nonatomic) CAGradientLayer *comboNumberBackLayer;
@property (retain, nonatomic) HTSLiveArtTextLabel *comboNumberLabel;
@property (nonatomic) BOOL disableComboNumberContainerAppearAnimation;
@property (retain, nonatomic) UIImageView *hugeText;
@property (retain, nonatomic) UIImageView *hintHugeText;
@property (retain, nonatomic) UIImageView *sendTogherHintText;
@property (nonatomic) int currentShowingTextNumber;
@property (retain, nonatomic) IESLiveCountTimer *comboNumberContainerRemovedTimer;
@property (retain, nonatomic) NSArray *backgroundColors;
@property (nonatomic) double comboNumberCornerRadius;

- (void)showSendTogetherHintTextWithURL:(id)a0 isNormalHint:(BOOL)a1;
- (void)showHintHugeTextWithURL:(id)a0;
- (void)showHugeTextWithURL:(id)a0;
- (id)backgroundViewContainer;
- (id)initWithDelegate:(id)a0 backgroundColors:(id)a1 comboNumberType:(long long)a2;
- (void)p_doComboNumberLabelAnimation;
- (void)p_doComboNumberContainerAppearAnimation;
- (void)startComboNumberContainerRemovedTimer;
- (void)p_doComboNumberContainerDisappearAnimation;
- (void)p_startHugeTextAnimation;
- (void)hideComboNumberContainerWithCompletion:(id /* block */)a0;
- (void)p_startHintHugeTextAnimation;
- (void)removeOtherText;
- (void)p_startSendTogetherHintAnimationWithNormalHint:(BOOL)a0;
- (id)initWithDelegate:(id)a0 backgroundColors:(id)a1;
- (void)startComboNumberAnimation;
- (void)removeText;
- (void)setupSubview;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelAnimation;

@end
