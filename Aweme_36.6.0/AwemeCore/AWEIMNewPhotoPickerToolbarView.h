@class UIButton, NSString, UIView;

@interface AWEIMNewPhotoPickerToolbarView : UIView

@property (retain, nonatomic) UIButton *sendButton;
@property (retain, nonatomic) UIButton *watchOnceSendButton;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIView *bottomView;
@property (nonatomic) unsigned long long toobarType;
@property (nonatomic) BOOL automaticDisable;
@property (nonatomic) BOOL albumNewStyle;
@property (nonatomic) unsigned long long sendCount;
@property (copy, nonatomic) NSString *sendButtonTitle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withUnselectImage:(id)a1 withSelectImage:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withUnselectImage:(id)a1 withSelectImage:(id)a2 toobarType:(unsigned long long)a3;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
