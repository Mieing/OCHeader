@class NSString, AWEVideoCoverFontDataLoader, AWEVideoCoverEditorTextFontChooseView;

@interface AWEVideoCoverEditorTextFontViewController : ACCTextStyleViewController

@property (retain, nonatomic) AWEVideoCoverEditorTextFontChooseView *fontChooseView;
@property (retain, nonatomic) AWEVideoCoverFontDataLoader *fontDataLoader;
@property (copy, nonatomic) NSString *observerIdentifier;
@property (nonatomic) BOOL isInputEditMode;

- (void)configUI;
- (void)setDidSelectedFontBlock:(id /* block */)a0;
- (void)resetViewWithHeight:(double)a0;
- (void)clearSelectFont;
- (void)selectWithFontId:(id)a0;
- (void)resetContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)disableFontView;
- (void)resetFontView;
- (void)constructFontData;
- (id)initWithMode:(BOOL)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
