@class UICollectionView, IESECWinTabListModel, IESECServiceProxy, NSString, UIView, UIScrollView, IESECWinContext;
@protocol IESHYContainerProtocol, IESECWinMainScrollService, IESECWinLynxCardService, IESECWinFeedLinkedService;

@interface IESECWinWebTabViewController : UIViewController <IESHYHybridViewLifecycleProtocol, UIScrollViewDelegate, IESECWinTabViewControllerProtocol>

@property (retain, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) IESECWinTabListModel *listModel;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *cardView;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxCardService> *lynxCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedLinkedService> *linkedService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinMainScrollService> *scrollService;
@property (retain, nonatomic) UIScrollView *defaultScrollView;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (nonatomic) BOOL isManualScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) unsigned long long tabDataStatus;
@property (retain, nonatomic) UIScrollView *scrollView;

- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)initialData;
- (BOOL)viewShouldStartLoadWithRequest:(id)a0;
- (BOOL)viewShouldAllowLoadWithResponse:(id)a0;
- (void)createHybridContainer;
- (void)reloadViewController;
- (void)updateWithTabList:(id)a0;
- (void)checkIfScrollEnded;
- (id)initWithContext:(id)a0 tabList:(id)a1;
- (void)tabVCWillShow;
- (void)tabVCDidShow;
- (void)bindWebScrollView;
- (void)scrollViewEndScroll;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end
