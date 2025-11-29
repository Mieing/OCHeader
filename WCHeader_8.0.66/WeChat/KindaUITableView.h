@class NSMutableDictionary, KindaTableViewCell;
@protocol KindaUITableViewDelegate;

@interface KindaUITableView : WCTableView {
    id<KindaUITableViewDelegate> _kindaDelegate;
    double _measureHeight;
    long long _cellSize;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } oldRect;
@property (retain, nonatomic) NSMutableDictionary *heightAtIndexPath;
@property (retain, nonatomic) KindaTableViewCell *measureCell;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)layoutSubviews;
- (void)setKindaDelegate:(id)a0;
- (void)setCellSize:(long long)a0;
- (void)reloadData;
- (void).cxx_destruct;

@end
