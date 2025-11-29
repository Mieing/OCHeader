@class NSString, NSMutableDictionary, AWEAwemeModel, UIView, UITableViewCell, UIViewController;
@protocol AWEFeedFeelGoodControllerProtocol, AWEFollowEmptyHintViewControllerProtocol, AWEFeedPreloadManagerProtocol, AWEFeedContainerProtocol, AFDFeedPreloadControllerProtocol, AWEFeedTableViewControllerProtocol, IESVideoStrategyDataSourceProtocol, AWEFollowContainerViewControllerProtocol, AWEFeedTableViewCellProtocol;

@interface AWEFeedListContext : AWEAwemePageContext <AWEFeedListContextProtocol>

@property (weak, nonatomic) UIViewController<AWEFeedContainerProtocol, AWEFeedTableViewControllerProtocol> *viewController;
@property (retain, nonatomic) NSString *lableForType;
@property (retain, nonatomic) AWEAwemeModel *currentAweme;
@property (nonatomic) long long loadMoreType;
@property (nonatomic) BOOL firstRealNetResponse;
@property (nonatomic) long long refreshType;
@property (nonatomic) BOOL refreshAnimation;
@property (nonatomic) BOOL shouldEnableSlideDislike;
@property (retain, nonatomic) id<AWEFeedPreloadManagerProtocol, IESVideoStrategyDataSourceProtocol> preloadManager;
@property (retain, nonatomic) id<AFDFeedPreloadControllerProtocol> preloadController;
@property (retain, nonatomic) NSMutableDictionary *videoDownloadCompletedDict;
@property (retain, nonatomic) UIView *publishProgressView;
@property (nonatomic) BOOL isDisplayingProgressView;
@property (nonatomic) BOOL isShowingFollowGroupSelectionPanel;
@property (retain, nonatomic) UIViewController<AWEFollowEmptyHintViewControllerProtocol> *emptyHintViewController;
@property (weak, nonatomic) UITableViewCell<AWEFeedTableViewCellProtocol> *willDisplayPreloadedCell;
@property (weak, nonatomic) id<AWEFollowContainerViewControllerProtocol> followContainerVC;
@property (weak, nonatomic) id<AWEFeedFeelGoodControllerProtocol> feelGoodProtocol;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) double currentAwemePlayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)safelyModelForRow:(long long)a0;
- (BOOL)shouldContinuouslyPlay:(id)a0 withSeekToTime:(double)a1;
- (id)subContextClassNameArray;
- (long long)currentIndex;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;
- (void)setCurrentModel:(id)a0;
- (id)currentModel;

@end
