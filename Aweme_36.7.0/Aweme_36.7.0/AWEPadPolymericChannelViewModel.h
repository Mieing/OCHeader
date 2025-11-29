@class AWEPLVPageContext, NSString, AWEBaseListAdapterDataSource, IGListAdapter, AWEPadPolymericChannelDataController, NSNumber, UIViewController;

@interface AWEPadPolymericChannelViewModel : NSObject <AWEBaseListViewControllerDataSource, AWEUserMessage>

@property (retain, nonatomic) AWEPadPolymericChannelDataController *dataController;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) AWEBaseListAdapterDataSource *dataSource;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *pageKey;
@property (retain, nonatomic) NSNumber *lastEnterTimeStamp;
@property (nonatomic) BOOL processingLogin;
@property (weak, nonatomic) UIViewController *container;
@property (retain, nonatomic) NSString *extraInfo;
@property (retain, nonatomic) AWEPLVPageContext *pageContext;
@property (copy, nonatomic) NSString *subTabModuleName;
@property (readonly, nonatomic) BOOL shouldAdapterLightMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)willStartLogin;
- (void)didCancelLogin;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)sectionViewModels;
- (id)sectionControllerClassArray;
- (void)appDidEnterForeground;
- (void)viewDidDisAppear;
- (void)bindListAdapter:(id)a0 dataSource:(id)a1;
- (id)initWithPageKey:(id)a0 enterFrom:(id)a1 enableCache:(BOOL)a2;
- (void)viewWillRefresh;
- (void)viewDidRefresh;
- (BOOL)isCurrentTheaterTab;
- (BOOL)defaultEnableGrid;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)dealloc;
- (void)appDidEnterBackground;
- (void)appWillResignActive;

@end
