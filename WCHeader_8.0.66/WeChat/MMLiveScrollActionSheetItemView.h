@class MMLiveScrollActionSheetItem;
@protocol MMLiveScrollActionSheetItemViewDelegate;

@interface MMLiveScrollActionSheetItemView : MMUIView

@property (weak, nonatomic) id<MMLiveScrollActionSheetItemViewDelegate> delegate;
@property (retain, nonatomic) MMLiveScrollActionSheetItem *item;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onTapd;
- (void)reloadData;
- (void).cxx_destruct;

@end
