@class UIColor, NSString, UIVisualEffectView, UIView, NSMutableArray;

@interface AWEFakeProgressSliderView : UIView <AWEFakeProgressSliderViewProtocol>

@property (retain, nonatomic) NSMutableArray *chapterViewArray;
@property (nonatomic) double containerHeight;
@property (nonatomic) double thumbViewWidth;
@property (nonatomic) double thumbViewRadius;
@property (nonatomic) long long hiddenChapterIndex;
@property (nonatomic) double percentage;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *thumbView;
@property (retain, nonatomic) UIView *whiteView;
@property (retain, nonatomic) UIView *grayView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (nonatomic) BOOL isDisappearAnimating;
@property (copy, nonatomic) id /* block */ customChapterPointView;
@property (retain, nonatomic) UIColor *playedChapterPointColor;
@property (retain, nonatomic) UIColor *unplayedChapterPointColor;
@property (nonatomic) BOOL disableGrayViewEffect;
@property (nonatomic) double sliderColorAlphaWhenStable;
@property (nonatomic) double sliderColorStrongStateAlpha;
@property (nonatomic) double grayViewColorStableStateAlpha;
@property (nonatomic) double grayViewColorStrongStateAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEBrandColorAdapterClass;
+ (long long)progressSmallerWhenDragSolution;

- (id)aAWEPadModuleAdapter;
- (id)aAWEBrandColorAdapter;
- (void)disableBlurEffect;
- (void)enableBlurEffect;
- (id)sliderThemeColor;
- (void)setupChapterUIWithArray:(id)a0;
- (void)removerChapterView;
- (void)updateChapterUIWithArray:(id)a0 playTime:(double)a1;
- (void)show:(BOOL)a0 animation:(id /* block */)a1 completion:(id /* block */)a2;
- (unsigned long long)progressSliderAnimationOptions;
- (void)updateThumbViewHeight:(BOOL)a0;
- (void)showAllChapterPointViews;
- (void)hiddenChapterPointViewWithIndex:(long long)a0;
- (void)addProcessIcon:(id)a0;
- (void)updateChapterPointViewHeightTo:(double)a0;
- (double)realViewHeightWhenDragging;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupUI;
- (void)show:(BOOL)a0 completion:(id /* block */)a1;

@end
