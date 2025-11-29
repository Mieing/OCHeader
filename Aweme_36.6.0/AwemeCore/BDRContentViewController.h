@class BDRScrollView, BDReaderPageContext, UIView, BDReaderChapterInfo, BDReaderModel, NSString, BDReaderConfig, NSObject, BDReaderBookInfo;
@protocol BDReaderInsertViewProtocol;

@interface BDRContentViewController : UIViewController <BDRScrollViewDelegate, BDReaderInsertedViewControllerProtocol>

@property (retain, nonatomic) NSObject<BDReaderInsertViewProtocol> *loadingViewObj;
@property (retain, nonatomic) NSObject<BDReaderInsertViewProtocol> *errorViewObj;
@property (nonatomic) double textLoadTime;
@property (retain, nonatomic) BDRScrollView *scrollView;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) struct CGPoint { double x; double y; } beginOffset;
@property (nonatomic) struct CGPoint { double x; double y; } movedTouch;
@property (nonatomic) double resistanceRatioY;
@property (nonatomic) BOOL isInActiveGesture;
@property (retain, nonatomic) BDReaderModel *readerModel;
@property (retain, nonatomic) BDReaderPageContext *pageContext;
@property (readonly, nonatomic) BDReaderConfig *configData;
@property (readonly, nonatomic) BDReaderBookInfo *bookInfo;
@property (readonly, nonatomic) BDReaderChapterInfo *chapterInfo;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isEnableToolView;
@property (readonly, nonatomic) BOOL isInterruptAction;
@property (readonly, nonatomic) BOOL isEnableTapPage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } layoutSize;
@property (readonly, nonatomic) BOOL isFocusBottom;
@property (readonly, nonatomic) BOOL isFocusTop;

- (void)panGestureRecognizerDetected:(id)a0;
- (void)onUIApplicationDidBecomeActiveNotification:(id)a0;
- (void)onUIApplicationDidEnterBackgroundNotification:(id)a0;
- (void)initTextLoadTime;
- (void)reportTextReadTime;
- (BOOL)isReportStayTime;
- (BOOL)isDragEnable;
- (void)contentViewDidScroll:(id)a0;
- (void)contentViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)contentViewWillBeginDragging:(id)a0;
- (void)readerInsertedViewControllerThemeConfigChange:(id)a0;
- (void)onInsertedViewControllerWillAppear;
- (void)onInsertedViewControllerWillDisappear;
- (void)onInsertedViewControllerDidAppear;
- (void)onInsertedViewControllerDidDisappear;
- (void)readerInsertedViewControllerBackgroundConfigChange:(id)a0;
- (void)hideLoading;
- (BOOL)scrollView:(id)a0 shoundBeginGesture:(id)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)showError:(id)a0;
- (void)hideError;
- (void)showLoading;

@end
