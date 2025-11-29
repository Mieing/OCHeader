@class UIView;

@interface WCPayOpenTouchIDAuthConfirmView : MMUIView

@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ okBlock;

- (id)initWithType:(int)a0;
- (void)setupOpenTouchIDSuccessView;
- (void)setupOpenTouchIDGuiderView;
- (id)getHighlightImg:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onOKBtnClick:(id)a0;
- (void)onCancelBtnClick:(id)a0;
- (void)show;
- (float)widthOfContent;
- (float)fontSizeOfTitle;
- (float)fontSizeOfSubtitle;
- (float)fontSizeOfBtn;
- (float)topOfImg;
- (float)topOfTitle;
- (float)topOfSubtitle;
- (float)topOfBtn;
- (float)heightOfBtn;
- (void).cxx_destruct;

@end
