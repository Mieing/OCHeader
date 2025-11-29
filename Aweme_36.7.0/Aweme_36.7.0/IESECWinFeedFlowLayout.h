@class NSArray, NSMapTable, NSMutableDictionary, IESECWinContext;

@interface IESECWinFeedFlowLayout : UICollectionViewFlowLayout {
    IESECWinContext *_context;
    double _leftMaxY;
    double _rightMaxY;
    double _view_width;
    NSArray *_dataSource;
    NSMapTable *_dataMapper;
    NSMutableDictionary *_resultMapper;
    BOOL _cacheLayout;
    BOOL _hasSetSplitTopFrame;
    BOOL _hasSetSplitModeMinY;
}

@property (copy, nonatomic) id /* block */ prepareLayoutFinish;

- (void)configDataSource:(id)a0;
- (id)dataSourceKey:(id)a0;
- (void)configListObject:(id)a0 sectionController:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getRectWithObject:(id)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)initWithContext:(id)a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
