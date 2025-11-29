@class UIButton;

@interface ACCImportMusicExtractAudioView : UIView

@property (retain, nonatomic) UIButton *extractButton;
@property (copy, nonatomic) id /* block */ clickAction;

+ (double)viewHeight;

- (void)extractButtonClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
