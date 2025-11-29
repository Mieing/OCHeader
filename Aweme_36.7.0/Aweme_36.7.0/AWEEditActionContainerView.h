@class NSArray, AWEEditActionContainerViewLayout;

@interface AWEEditActionContainerView : UIScrollView

@property (copy, nonatomic) NSArray *itemDatas;
@property (copy, nonatomic) NSArray *itemViews;
@property (readonly, nonatomic) AWEEditActionContainerViewLayout *containerViewLayout;

- (id)initWithItemDatas:(id)a0 containerViewLayout:(id)a1;
- (struct CGSize { double x0; double x1; })itemSizeWithItem:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeForItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)findItemViewById:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;

@end
