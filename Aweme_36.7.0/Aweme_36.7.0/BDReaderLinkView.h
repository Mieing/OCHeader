@class UIColor;
@protocol BDReaderLinkViewDelegate;

@interface BDReaderLinkView : UIView

@property (retain, nonatomic) UIColor *itemBgColor;
@property (weak, nonatomic) id<BDReaderLinkViewDelegate> delegate;

- (void)addItem:(id)a0 selectRects:(id)a1;
- (void).cxx_destruct;
- (void)removeAllItems;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
