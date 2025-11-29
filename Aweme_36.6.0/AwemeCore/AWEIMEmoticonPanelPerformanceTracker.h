@class NSMutableSet, AWEIMEmoticonCellViewModel;
@protocol AWEIMEmoticonPanelPage;

@interface AWEIMEmoticonPanelPerformanceTracker : NSObject

@property (weak, nonatomic) id<AWEIMEmoticonPanelPage> page;
@property (retain, nonatomic) NSMutableSet *vmInFirstFrame;
@property (retain, nonatomic) AWEIMEmoticonCellViewModel *emptyViewModel;
@property (nonatomic) double pageWillDisplayTime;
@property (nonatomic) double imageDidLoadTime;

- (void)panelCollectionViewReloadData;
- (void)pageWillDisplay;
- (void)recordViewModelIfNeeded:(id)a0;
- (void)p_report;
- (void)p_reportEmoticonPerf:(id)a0 processDuration:(long long)a1;
- (void).cxx_destruct;
- (id)initWithPage:(id)a0;
- (id /* block */)imageDidLoadBlock;

@end
