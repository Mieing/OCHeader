@class NSMutableArray;

@interface BTShowMoreItemCellViewModel : BTBaseItemCellViewModel {
    struct CGSize { double width; double height; } _showMoreLabelSize;
    NSMutableArray *_showMoreLabelStyles;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } showMoreLabelSize;
@property (readonly, nonatomic) NSMutableArray *showMoreLabelStyles;

- (id)itemViewClassName;
- (double)viewHeight;
- (void).cxx_destruct;

@end
