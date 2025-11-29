@class NSString, AWEPOIDetailDataManager, UIScrollView, AWEPOIDetailInfoContainerController;
@protocol AWEPOILiveDetailViewControllerDelegate;

@interface AWEPOILiveDetailViewController : UIViewController <UIScrollViewDelegate>

@property (retain, nonatomic) AWEPOIDetailInfoContainerController *contentViewController;
@property (retain, nonatomic) UIScrollView *contentView;
@property (retain, nonatomic) AWEPOIDetailDataManager *dataManager;
@property (nonatomic) BOOL isFirstPageLoadingShowed;
@property (readonly, nonatomic) NSString *poiID;
@property (readonly, nonatomic) unsigned long long scene;
@property (weak, nonatomic) id<AWEPOILiveDetailViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (id)poiDetail;
- (void)p_fetchData;
- (id)constData;
- (void)p_bindStateAndAction;
- (void)p_registerStoreWithModel:(id)a0 poiId:(id)a1;
- (void)p_updateUIWithData;
- (void)p_updateVisibleZone;
- (id)initWithPOI:(id)a0 scene:(unsigned long long)a1 extraParams:(id)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)store;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;

@end
