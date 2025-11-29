@class AWEVideoCoverTextTabContext, NSString, AWEStoryColorChooseView, AWEVideoCoverFontChooseView, UIView, AWEStoryColor, UIButton;
@protocol AWEVideoCoverTextStyleDelegate;

@interface AWEVideoCoverTextStyleViewController : UIViewController

@property (retain, nonatomic) UIButton *textStyleButton;
@property (retain, nonatomic) UIButton *alignmentButton;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) AWEVideoCoverFontChooseView *fontChooseView;
@property (retain, nonatomic) AWEStoryColorChooseView *colorChooseView;
@property (copy, nonatomic) NSString *observerIdentifier;
@property (retain, nonatomic) AWEStoryColor *currentStoryColor;
@property (retain, nonatomic) AWEVideoCoverTextTabContext *context;
@property (weak, nonatomic) id<AWEVideoCoverTextStyleDelegate> delegate;

+ (id)allTextStyles;

- (void)setupSubView;
- (void)updateTextAlign;
- (id)currentTextModel;
- (id)colorViewLayout;
- (void)didSelectedColor:(id)a0 index:(id)a1;
- (void)disableFontStyle;
- (void)resetFontStyle;
- (void)constructFontData;
- (void)didClickTextStyleButton:(id)a0;
- (void)didClickAlignmentButton:(id)a0;
- (void)updateFontStyleSelectedState:(id)a0;
- (void)updateColorStyleSelectedState:(id)a0;
- (void)clearSelectedStyle;
- (void)didSelectedFont:(id)a0 index:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
