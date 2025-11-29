@class DUXVacantView;

@interface AWESearchTagResultsEmptyView : AWESearchScanResultsEmptyView

@property (nonatomic) unsigned long long emptyStatus;
@property (retain, nonatomic) DUXVacantView *emptyView;
@property (retain, nonatomic) DUXVacantView *noNetWorkView;

- (void)configUI;
- (void)updateEmptyViewWithStatus:(unsigned long long)a0 openSearchPage:(id)a1;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)resume;
- (void)layoutSubviews;

@end
