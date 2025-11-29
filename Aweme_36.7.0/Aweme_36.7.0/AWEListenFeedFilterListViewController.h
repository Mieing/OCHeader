@class NSObject, NSString, AWEButton, AWEListenFeedFilterListContext, UILabel, UIView, NSDictionary;
@protocol AWEListenFeedContextProtocol;

@interface AWEListenFeedFilterListViewController : AWEBaseListViewController <UICollectionViewDelegate, AWERouterViewControllerProtocol>

@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) AWEButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEListenFeedFilterListContext *context;
@property (retain, nonatomic) UIView *loadingContentView;
@property (retain, nonatomic) UIView *noticeView;
@property (nonatomic) double startTimestamp;
@property (nonatomic) BOOL needTrackEnterModelPage;
@property (nonatomic) long long dataState;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) NSString *previousMethod;
@property (retain, nonatomic) NSObject<AWEListenFeedContextProtocol> *firstPageContext;
@property (retain, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)customLayoutCollectionView:(id)a0;
- (id)sectionControllerClassArray;
- (void)backButtonClicked;
- (void)trackStayTime;
- (void)setupBind;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)handleFetchDataState:(long long)a0;
- (void)setNetErrorViewIfNeed;
- (void)trackEnterModelPageIfNeed;
- (void)setNoColledViewIfNeed;
- (void)setNoticeViewWithImagePath:(id)a0 title:(id)a1 text:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)setupData;
- (void)setupCollectionView:(id)a0;

@end
