@class UIButton, UIView;
@protocol ACCAIGCUGCFusionCreationToolsMediaTypeViewDelegate;

@interface ACCAIGCUGCFusionCreationToolsMediaTypeView : UIView

@property (nonatomic) unsigned long long enterType;
@property (retain, nonatomic) UIView *mediaTypeIndexView;
@property (retain, nonatomic) UIButton *imageButton;
@property (retain, nonatomic) UIButton *liveButton;
@property (retain, nonatomic) UIButton *videoButton;
@property (weak, nonatomic) id<ACCAIGCUGCFusionCreationToolsMediaTypeViewDelegate> delegate;

- (void)onThemeChanged;
- (void)updateWithTheme:(long long)a0;
- (void)bindService;
- (BOOL)shouldFitLightModeUI;
- (id)initWithEnterType:(unsigned long long)a0;
- (void)updateWithMediaType:(unsigned long long)a0 animated:(BOOL)a1;
- (void)animateMediaTypeViewWithNeedAnimate:(BOOL)a0 mediaType:(long long)a1;
- (void)buttonDidCliked:(id)a0;
- (void).cxx_destruct;
- (void)setupViews;

@end
