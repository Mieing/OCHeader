@class NSString, UIImageView, RichTextView, MMUIButton;

@interface WCFinderPostTopBaseView : MMUIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) MMUIButton *sureBtn;
@property (retain, nonatomic) MMUIButton *closeBtn;
@property (copy, nonatomic) id /* block */ sureBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) NSString *reportEId;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 iconImage:(id)a1 content:(id)a2 sureBlock:(id /* block */)a3 closeBlock:(id /* block */)a4;
- (void)onClickSureBtn;
- (void)onClickCloseBtn;
- (void)setUpUIComponent:(id)a0 content:(id)a1;
- (void)_layoutUIViews;
- (void).cxx_destruct;

@end
