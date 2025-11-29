@class NSMapTable, NSDictionary, NSString, UIScrollView, NSMutableArray;

@interface WCFinderMyTabEntranceViewController : MMUIViewController <WCFinderMyTabSectionControllerDelegate, WCFinderFeedBaseViewControllerProtocol>

@property (retain, nonatomic) NSMapTable *paramsMap;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) NSMapTable *cardViewMap;
@property (retain, nonatomic) NSMapTable *titleLabelMap;
@property (retain, nonatomic) NSMapTable *reportInfoMap;
@property (nonatomic) struct CGSize { double width; double height; } cacheContentSize;
@property (retain, nonatomic) NSDictionary *combineReportInfo;
@property (nonatomic) BOOL ignoreReload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)displaySections;

- (id)initWithParams:(id)a0;
- (void)viewDidLoad;
- (id)_makeSection:(Class)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)viewWillPush:(BOOL)a0;
- (void)viewWillPresent:(BOOL)a0;
- (void)viewDidPushOrPresent:(BOOL)a0;
- (void)reloadData;
- (id)_makeSectionTitle:(id)a0;
- (void)viewWillLayoutSubviews;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)_layoutElements;
- (void)_layoutElements:(BOOL)a0;
- (void)_updateTitle:(id)a0;
- (void)_layoutSection:(id)a0 titleLabel:(id)a1 originY:(double *)a2 margin:(double)a3;
- (void)_layoutSectionTitle:(id)a0 originY:(double *)a1 margin:(double)a2;
- (void)onEntranceSectionDisplayChanged:(id)a0;
- (void)entranceSectionSetNeedsLayout:(id)a0;
- (id)entranceSectionRequestNavigationController;
- (void)onEntranceSection:(id)a0 updateReportInfo:(id)a1;
- (id)entranceSectionGetCombineReportInfo:(id)a0;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
