@class NSMutableArray, NSMutableAttributedString;

@interface WXGClickableLabel : UILabel

@property (retain, nonatomic) NSMutableArray *clickableRanges;
@property (retain, nonatomic) NSMutableAttributedString *attrStr;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (void)setAttributedText:(id)a0;
- (void)commonInit;
- (void)addClickHandlerForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBlock:(id /* block */)a1;
- (void)clearAllClickRange;
- (void)handleTap:(id)a0;
- (long long)characterIndexAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)handleClickAtCharacterIndex:(long long)a0;
- (void).cxx_destruct;

@end
