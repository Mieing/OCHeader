@class MMScrollActionSheetItem;
@protocol MMScrollActionSheetItemViewDelegate;

@interface MMScrollActionSheetItemView : MMUIView

@property (weak, nonatomic) id<MMScrollActionSheetItemViewDelegate> delegate;
@property (retain, nonatomic) MMScrollActionSheetItem *item;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onTapd;
- (void)reloadData;
- (void)highLight;
- (void).cxx_destruct;

@end
