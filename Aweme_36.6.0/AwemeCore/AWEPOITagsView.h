@protocol AWEPOITagsViewDataSource;

@interface AWEPOITagsView : UIView

@property (nonatomic) long long numberOfItems;
@property (nonatomic) long long lineCount;
@property (weak, nonatomic) id<AWEPOITagsViewDataSource> dataSource;
@property (nonatomic) double lineSpace;
@property (nonatomic) double space;
@property (nonatomic) long long maxNumberOfLines;

- (double)updateTagsFrameWithMaxWidth:(double)a0 maxHeight:(double)a1;
- (double)getHeightWithMaxWidth:(double)a0 maxHeight:(double)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
