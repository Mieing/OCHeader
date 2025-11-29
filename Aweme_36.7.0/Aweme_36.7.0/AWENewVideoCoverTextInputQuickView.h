@class UIView, NSString, AWEStoryColorChooseView, AWEVideoCoverRecommendTextViewController, AWEStoryColor, UIButton, AWEVideoCoverFontChooseView, AWEVideoCoverTextTabContext;
@protocol AWEVideoCoverTextStyleDelegate, AWEVideoCoverRecommendTextViewDelegate;

@interface AWENewVideoCoverTextInputQuickView : UIView

@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UIButton *fontButton;
@property (retain, nonatomic) UIButton *colorButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWEVideoCoverFontChooseView *fontChooseView;
@property (retain, nonatomic) AWEStoryColorChooseView *colorChooseView;
@property (retain, nonatomic) AWEVideoCoverRecommendTextViewController *recommendTextController;
@property (copy, nonatomic) NSString *observerIdentifier;
@property (retain, nonatomic) AWEStoryColor *currentStoryColor;
@property (retain, nonatomic) AWEVideoCoverTextTabContext *context;
@property (weak, nonatomic) id<AWEVideoCoverTextStyleDelegate> styleDelegate;
@property (weak, nonatomic) id<AWEVideoCoverRecommendTextViewDelegate> recommendTextDelegate;

- (void)onCloseAction;
- (void)setupSubView;
- (id)currentTextModel;
- (void)observeFontData;
- (void)onColorAction;
- (void)onFontAction;
- (id)colorViewLayout;
- (void)didSelectedColor:(id)a0 index:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleDelegate:(id)a1 recommendTextDelegate:(id)a2;
- (void)disableFontStyle;
- (void)resetFontStyle;
- (void).cxx_destruct;
- (void)update;

@end
