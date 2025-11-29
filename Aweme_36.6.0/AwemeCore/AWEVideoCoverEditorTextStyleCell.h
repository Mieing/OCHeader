@class AWEVideoCoverEditorTextFaceViewController, AWEVideoCoverEditorTextFontViewController;
@protocol AWEVideoCoverEditorTextBaseProtocol, AWEVideoCoverEditorTextStyleProtocol;

@interface AWEVideoCoverEditorTextStyleCell : UIView

@property (retain, nonatomic) AWEVideoCoverEditorTextFaceViewController *textTypeFaceController;
@property (retain, nonatomic) AWEVideoCoverEditorTextFontViewController *textFontController;
@property (weak, nonatomic) id<AWEVideoCoverEditorTextBaseProtocol, AWEVideoCoverEditorTextStyleProtocol> delegate;

- (void)updateSelectStatusWithColor:(id)a0 style:(unsigned long long)a1 alignment:(long long)a2;
- (void)updateSelectStatusWithFont:(id)a0;
- (void)clearStyleSelectStatus;
- (void)clearFontSelectStatus;
- (void)disableFontView;
- (void)resetFontView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
