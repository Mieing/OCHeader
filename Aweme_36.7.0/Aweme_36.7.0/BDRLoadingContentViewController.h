@class UIViewController, BDReaderPageChangeInfo;
@protocol BDReaderInsertedViewControllerProtocol;

@interface BDRLoadingContentViewController : BDRContentViewController

@property (retain, nonatomic) UIViewController<BDReaderInsertedViewControllerProtocol> *targetVC;
@property (retain, nonatomic) BDReaderPageChangeInfo *changeInfo;

- (BOOL)isReportStayTime;
- (void)readerInsertedViewControllerThemeConfigChange:(id)a0;
- (void)onInsertedViewControllerWillAppear;
- (void)onInsertedViewControllerWillDisappear;
- (void)onInsertedViewControllerDidAppear;
- (void)onInsertedViewControllerDidDisappear;
- (void)onInsertedViewControllerShowRate:(float)a0;
- (void)onInsertedViewControllerRefreshCurrentPage;
- (void)readerInsertedViewControllerBackgroundConfigChange:(id)a0;
- (BOOL)isEnableToolView;
- (BOOL)isInterruptAction;
- (BOOL)isEnableTapPage;
- (BOOL)isFocusBottom;
- (BOOL)isFocusTop;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })layoutSize;
- (id)description;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
