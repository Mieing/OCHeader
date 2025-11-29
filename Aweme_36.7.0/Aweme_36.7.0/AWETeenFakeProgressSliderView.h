@class UIView, NSMutableArray, UIVisualEffectView;

@interface AWETeenFakeProgressSliderView : UIView

@property (retain, nonatomic) NSMutableArray *chapterViewArray;
@property (retain, nonatomic) UIVisualEffectView *blurBackgroudView;
@property (nonatomic) double percentage;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *thumbView;
@property (retain, nonatomic) UIView *whiteView;
@property (retain, nonatomic) UIView *grayView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (nonatomic) BOOL isDisappearAnimating;

+ (Class)aAWEBrandColorAdapterClass;

- (id)aAWEBrandColorAdapter;
- (id)sliderThemeColor;
- (void)addProcessIcon:(id)a0;
- (void)setupProgressUIWithPoint:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupUI;
- (void)show:(BOOL)a0 completion:(id /* block */)a1;

@end
