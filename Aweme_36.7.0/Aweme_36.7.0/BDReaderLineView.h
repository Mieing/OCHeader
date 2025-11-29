@class NSArray, NSMutableDictionary, NSMutableArray;
@protocol BDReaderLineViewDelegate;

@interface BDReaderLineView : UIView

@property (retain, nonatomic) NSMutableDictionary *levelViews;
@property (readonly, copy, nonatomic) NSArray *levelViewArrs;
@property (retain, nonatomic) NSMutableArray *lineItems;
@property (weak, nonatomic) id<BDReaderLineViewDelegate> delegate;

- (void)addLineItem:(id)a0;
- (id)lineItemWithLineInfo:(id)a0;
- (void).cxx_destruct;
- (void)removeAllItems;
- (void)draw;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
