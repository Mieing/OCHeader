@class UIColor, UIScrollView, UIView, UIButton;

@interface IESLiveSoloKTVEditSegmentView : UIView

@property (retain, nonatomic) UIButton *bgBtn;
@property (retain, nonatomic) UIButton *tuningBtn;
@property (retain, nonatomic) UIView *bgContainer;
@property (retain, nonatomic) UIScrollView *tuningContainer;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIButton *mvBtn;
@property (retain, nonatomic) UIButton *myVideoBtn;
@property (retain, nonatomic) UIView *mvContainer;
@property (retain, nonatomic) UIView *videoContainer;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) UIColor *normalColor;
@property (nonatomic) long long scaleRatio;
@property (nonatomic) BOOL isBgSelected;
@property (nonatomic) BOOL isMVSelected;
@property (copy, nonatomic) id /* block */ bgClickBlock;
@property (copy, nonatomic) id /* block */ mvClickBlock;

- (void)initView;
- (void)addVideoView:(id)a0;
- (void)addMVView:(id)a0;
- (void)addTuningView:(id)a0;
- (void)updateBgAndTuning:(BOOL)a0;
- (void)updateMVAndVideo:(BOOL)a0;
- (void)bgClick:(id)a0;
- (id)createBtn:(id)a0 size:(double)a1 action:(SEL)a2;
- (void)tuningClick:(id)a0;
- (void)mvClick:(id)a0;
- (void)myVideoClick:(id)a0;
- (void).cxx_destruct;
- (void)initDefault;
- (id)init;

@end
