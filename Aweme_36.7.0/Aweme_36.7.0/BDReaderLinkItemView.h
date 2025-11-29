@class BDReaderLinkAttachment, UIColor;

@interface BDReaderLinkItemView : UIView

@property (retain, nonatomic) BDReaderLinkAttachment *linkAttachment;
@property (nonatomic) BOOL highlighted;
@property (retain, nonatomic) UIColor *bgColor;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (copy, nonatomic) id /* block */ highlightBlock;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)singleTap;

@end
