@class UIButton, NSString, UIImageView, UILabel, AWETextLinkView;

@interface AWEMemoriesThemeAuthorizationView : UIView <UITextViewDelegate>

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *promptImageView;
@property (retain, nonatomic) UILabel *promptLabel;
@property (retain, nonatomic) AWETextLinkView *tipsLabel;
@property (retain, nonatomic) UIButton *enableAuthorizationButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enableAuthorizationClicked:(id)a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
