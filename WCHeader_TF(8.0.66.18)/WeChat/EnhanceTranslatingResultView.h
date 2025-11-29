@class UIButton, UIImageView, UIImage;

@interface EnhanceTranslatingResultView : UIView

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UIImage *originCaptureImage;
@property (retain, nonatomic) UIImage *originEnhanceImage;
@property (copy, nonatomic) id /* block */ cancelHandler;
@property (copy, nonatomic) id /* block */ imageClickHandler;
@property (copy, nonatomic) id /* block */ autoTranslatingFinishedHandler;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)setDisplayImage:(id)a0 imgSize:(struct CGSize { double x0; double x1; })a1;
- (void)cancelButtonClicked;
- (void)translateImageClicked;
- (void).cxx_destruct;

@end
