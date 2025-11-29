@class AWEStoryFontChooseView, AWEStoryColorChooseView, UIView, UIButton;

@interface AWENewVideoCoverChooseBottomTextStyleView : UIView

@property (retain, nonatomic) AWEStoryColorChooseView *colorChooseView;
@property (retain, nonatomic) AWEStoryFontChooseView *fontChooseView;
@property (retain, nonatomic) UIButton *alignmentButton;
@property (retain, nonatomic) UIButton *textStyleButton;
@property (retain, nonatomic) UIView *splitLine;
@property (copy, nonatomic) id /* block */ didSelectFontBlock;
@property (copy, nonatomic) id /* block */ didSelectColorBlock;
@property (copy, nonatomic) id /* block */ didSelectAlignStyle;
@property (copy, nonatomic) id /* block */ didSelectTextStyle;
@property (copy, nonatomic) id /* block */ currentTextModel;

+ (id)allTextStyles;

- (id)textModel;
- (void)updateTextStyle;
- (void)updateCurrentStyle:(id)a0;
- (void)didClickToolbarAlignmentButton;
- (void)didClickToolbarTextStyleButton;
- (void)updateTextAlign;
- (void)clearStyleSelect;
- (id)currentFontModel;
- (id)currentColorModel;
- (long long)currentAlignStyle;
- (long long)currentTextStyle;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
