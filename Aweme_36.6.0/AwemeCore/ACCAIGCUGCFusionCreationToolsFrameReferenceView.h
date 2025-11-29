@class UIImageView, UILabel, UIButton;
@protocol ACCAIGCUGCFusionCreationToolsFrameReferenceViewDelegate;

@interface ACCAIGCUGCFusionCreationToolsFrameReferenceView : UIView

@property (nonatomic) unsigned long long enterType;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (weak, nonatomic) id<ACCAIGCUGCFusionCreationToolsFrameReferenceViewDelegate> delegate;
@property (retain, nonatomic) UIButton *closeButton;

- (void)onThemeChanged;
- (void)closeButtonDidClicked;
- (void)bindService;
- (BOOL)shouldFitLightModeUI;
- (id)initWithEnterType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)updateText:(id)a0;
- (void)setupViews;
- (void)updateWithImage:(id)a0;
- (id)coverImage;
- (double)viewWidth;

@end
