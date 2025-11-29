@class UIButton, NSString, UIView;

@interface AWEIMPhotoPickerToolbarView : UIView

@property (retain, nonatomic) UIButton *originalButton;
@property (retain, nonatomic) UIButton *previewButton;
@property (retain, nonatomic) UIButton *editButton;
@property (retain, nonatomic) UIButton *sendButton;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIView *bottomView;
@property (copy, nonatomic) NSString *sendButtonTitle;
@property (nonatomic) BOOL original;
@property (copy, nonatomic) id /* block */ originalValueChangeBlock;
@property (nonatomic) BOOL automaticDisable;
@property (nonatomic) BOOL albumNewStyle;
@property (nonatomic) unsigned long long sendCount;

- (void)useLightColor;
- (void)setOriginal:(BOOL)a0 animated:(BOOL)a1;
- (void)originalButtonPressed:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sendButtonTop:(double)a1 components:(id)a2 withUnselectImage:(id)a3 withSelectImage:(id)a4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sendButtonTop:(double)a1 components:(id)a2;
- (void)setButtonTitle:(id)a0 hideOriginalImage:(BOOL)a1;
- (void).cxx_destruct;

@end
