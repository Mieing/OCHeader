@class UIPageControl, NSString, NSTimer, UIImageView, UIScrollView, UIColor, UIButton;
@protocol UITextInput;

@interface LiteAppCustomKeyboard : UIView <UIScrollViewDelegate, UIInputViewAudioFeedback> {
    UIScrollView *scrollView;
    UIPageControl *pageControl;
    UIImageView *_imgDelete;
    UIImageView *_imgDeleteHL;
    UIColor *_btnBackgroundColorNormal;
    UIColor *_btnBackgroundColorHighlighted;
    UIColor *_delBtnBackgroundColorNormal;
    UIColor *_delBtnBackgroundColorHighlighted;
    UIColor *_btnBorderColor;
    BOOL _zeroLeft;
    BOOL _withMargin;
    BOOL _withCornerRadius;
    NSString *_confirmTitle;
    UIColor *_confirmColor;
    UIColor *_confirmBgColor;
    BOOL _confirmBtnEnableFlag;
    UIButton *_confirmBtn;
    BOOL _disableDarkMode;
}

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double height;
@property (retain, nonatomic) UIButton *extraButton;
@property (weak, nonatomic) id<UITextInput> textView;
@property (nonatomic) long long type;
@property (nonatomic) BOOL showConfirm;
@property (nonatomic) long long maxLength;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL enableInputClicksWhenVisible;

- (id)init;
- (void)didRotate;
- (BOOL)isPay;
- (void)updateInterfaceStyle;
- (void)setType:(long long)a0 showConfirm:(BOOL)a1;
- (void)setDisableDarkMode:(BOOL)a0;
- (void)setConfirmTitle:(id)a0;
- (void)setConfirmColor:(long long)a0;
- (void)setConfirmBgColor:(long long)a0;
- (void)enableKeyboardConfirm:(BOOL)a0;
- (void)setup3X4Keyboard:(BOOL)a0;
- (double)commonBtnWidth;
- (double)commonBtnHeight;
- (id)generateButton:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)generateNumberButton:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)generateDeleteButton:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)generateExtraButton:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)generateConfirmButton:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup4X4Keyboard:(BOOL)a0;
- (void)setExtraKey:(id)a0;
- (void)visitSubviewsOfView:(id)a0 vistor:(id /* block */)a1;
- (void)dismissPressed:(id)a0;
- (void)deleteReleased:(id)a0;
- (void)startDelete;
- (void)characterDeleted;
- (void)deletePressed:(id)a0;
- (void)characterPressed:(id)a0;
- (double)getHeight;
- (void)scrollViewDidScroll:(id)a0;
- (void)changePage:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)isDarkMode;
- (id)getKeyboardButtonFont;
- (void).cxx_destruct;

@end
