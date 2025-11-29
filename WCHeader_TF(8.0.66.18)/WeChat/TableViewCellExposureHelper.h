@class NSMutableSet, NSMutableArray, UITableView;
@protocol TableViewCellExposureDelegate, UITableViewDelegate;

@interface TableViewCellExposureHelper : MMObject {
    double m_navBarAndStatusBarHeight;
    UITableView *m_tableView;
    NSMutableArray *m_cellViewIndexPaths;
    NSMutableSet *m_sectionIndexSet;
    double m_lastOffset;
}

@property (weak, nonatomic) id<TableViewCellExposureDelegate> delegate;
@property (weak, nonatomic) id<UITableViewDelegate> tableViewDelegate;
@property (nonatomic) unsigned int minScrollingThreshold;

- (id)initWithTableView:(id)a0;
- (void)dealloc;
- (void)hookUITableView;
- (void)startCalculateItemCellViewExposure;
- (void)startCalculateSectionExposure;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tableViewVisibleRect;
- (id)calculateItemCellViewAndGetExposureInfo:(id)a0;
- (id)calculateSectionAndGetExposureInfo:(unsigned long long)a0;
- (id)hookTagForSelector:(SEL)a0;
- (void).cxx_destruct;

@end
