@class NSArray, NSDictionary, UIViewPropertyAnimator, UIView, MMUILabel;

@interface WCC2CPlayerRateLabel : UIControl

@property (retain, nonatomic) MMUILabel *textLabel;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) NSArray *supportedPlayRate;
@property (nonatomic) int playRateIndex;
@property (retain, nonatomic) UIViewPropertyAnimator *animator;
@property (retain, nonatomic) NSDictionary *palette;
@property (copy, nonatomic) id /* block */ onPlayRateChange;

- (id)init;
- (id)initWithPalette:(id)a0;
- (void)layoutSubviews;
- (void)updatePalette:(id)a0;
- (void)setWantsExtendedDynamicRangeContent:(BOOL)a0;
- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)setText:(id)a0;
- (void).cxx_destruct;

@end
