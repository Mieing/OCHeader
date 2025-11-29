@class UILabel, UIImageView;
@protocol ACCAIGCUGCFusionCreationToolsMediaTypeNormalViewDelegate;

@interface ACCAIGCUGCFusionCreationToolsMediaTypeNormalView : UIView

@property (nonatomic) unsigned long long enterType;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *indicatorImageView;
@property (weak, nonatomic) id<ACCAIGCUGCFusionCreationToolsMediaTypeNormalViewDelegate> delegate;

+ (id)textWithMediaType:(unsigned long long)a0;

- (void)onThemeChanged;
- (void)bindService;
- (BOOL)shouldFitLightModeUI;
- (id)initWithEnterType:(unsigned long long)a0;
- (void)updateWithMediaType:(unsigned long long)a0;
- (void)popoverAppearAction;
- (void)popoverDisappearAction;
- (void).cxx_destruct;
- (void)setupViews;

@end
