@class AWEAwemeModel, AWEProfilePostAnalysisModel, UIView, NSString, AWEProfileLynxLoadingView, NSMutableArray, AWEProfilePostAnalysisTabItemModel, UILabel, NSNumber;
@protocol AnnieXContainerBaseProtocol, AnnieXCardModelProtocol, AWEProfilePostAnalysisTabItemDelegate;

@interface AWEProfilePostAnalysisLynxViewController : UIViewController <BDXContainerLifecycleProtocol, AWEProfilePostAnalysisTabItemProtocol>

@property (retain, nonatomic) AWEProfilePostAnalysisTabItemModel *itemModel;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *lynxView;
@property (retain, nonatomic) AWEProfilePostAnalysisModel *panelModel;
@property (retain, nonatomic) AWEProfileLynxLoadingView *loadingView;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (retain, nonatomic) NSMutableArray *subscriberArray;
@property (weak, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UILabel *errorLabel;
@property (nonatomic) BOOL needRefreshLynxView;
@property (retain, nonatomic) NSNumber *chapterAutoApply;
@property (weak, nonatomic) id<AWEProfilePostAnalysisTabItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jsonStringFromDict:(id)a0;
+ (id)createWithItemModel:(id)a0 panelModel:(id)a1 delegate:(id)a2;

- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (id)currentScrollView;
- (void)unbindEvent;
- (void)createLynxContainerView;
- (void)registerBDXLocalMethod;
- (void)onThemeChangeNotificationAction:(id)a0;
- (void)unregistBDXLocalMethod;
- (void)bindLynxEvents;
- (BOOL)isRecommendChapterLynxView;
- (void)updateVideoPlayProgress:(double)a0;
- (void)blockCloseRecommendChapterLynxView;
- (id)initWithItemModel:(id)a0 panelModel:(id)a1 delegate:(id)a2;
- (void)showErrorLabel;
- (BOOL)isCoverDiagnoseLynxView;
- (void)updateLynxScrollView:(id)a0;
- (void)registChapterEvent;
- (void)registCoverEvent;
- (void)registScheduleEvent;
- (void)addChapterNotification;
- (void)chapterInfoUpdated:(id)a0;
- (void)openChapterEditor:(BOOL)a0 chapterAutoApplyStatus:(id)a1;
- (void)applyButtonClickedWithChapterAutoApplyStatus:(id)a0;
- (void)chapterCellClicked:(double)a0;
- (void)handleChapterAlertAction:(id)a0;
- (void)showChapterAutoApplyPopupWithKnownHandler:(id /* block */)a0;
- (void)openCoverEditor;
- (BOOL)isSchedulePostLynxView;
- (void)cancelPublish:(id)a0 completion:(id /* block */)a1;
- (void)openWorkEditorWithCompletion:(id /* block */)a0;
- (id)currentItemModel;
- (id)sheetShouldRecognizeAsynchronousScrollViewArray;
- (void)updateGlobalPropsEnterFrom;
- (void).cxx_destruct;
- (id)registerEvent:(id)a0 callback:(id /* block */)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)stopLoading;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;
- (id)currentViewController;
- (void)addObservers;

@end
