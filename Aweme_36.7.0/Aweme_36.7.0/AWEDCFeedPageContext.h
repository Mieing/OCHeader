@class AWEAwemeModel, NSString, AWEDCFeedRequestContext, AWEListDataController, NSDictionary, NSMutableArray, UIViewController, AWEDCFeedConfig, NSMutableSet, NSIndexPath;
@protocol AWEDCFeedListViewControllerProtocol, AWEDCFeedTrackerServiceProtocol, AWEDCFeedEventDispatcherProtocol, AWEDCFeedListViewControllerDelegate, AWEDCFeedDataManagerProtocol;

@interface AWEDCFeedPageContext : AWEPageContext

@property (retain, nonatomic) NSIndexPath *maxReachedIndexPath;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) id bizContext;
@property (weak, nonatomic) AWEDCFeedConfig *config;
@property (weak, nonatomic) id<AWEDCFeedEventDispatcherProtocol> eventDispatcher;
@property (weak, nonatomic) id<AWEDCFeedTrackerServiceProtocol> tracker;
@property (weak, nonatomic) id<AWEDCFeedListViewControllerDelegate> delegate;
@property (nonatomic) BOOL isListShowing;
@property (nonatomic) BOOL isDislikePanelShowing;
@property (nonatomic) BOOL hadEnteredInner;
@property (nonatomic) BOOL notFirstHandleResponse;
@property (nonatomic) BOOL hasForceInsert;
@property (nonatomic) BOOL isPartialRefreshOnForeground;
@property (retain, nonatomic) NSMutableArray *feedbackResignActiveIDArray;
@property (retain, nonatomic) NSMutableArray *livePlayEndRoomIDArray;
@property (copy, nonatomic) NSString *tapGuideItemID;
@property (weak, nonatomic) id<AWEDCFeedDataManagerProtocol> dataManager;
@property (retain, nonatomic) AWEListDataController *innerDataController;
@property (retain, nonatomic) AWEDCFeedRequestContext *requestContext;
@property (nonatomic) long long dynamicSectionColumn;
@property (weak, nonatomic) UIViewController<AWEDCFeedListViewControllerProtocol> *containerVC;
@property (retain, nonatomic) NSMutableSet *hasShownItemID;
@property (nonatomic) BOOL alreadyTrackFMP;
@property (nonatomic) BOOL alreadyTrackCacheCoverFMP;
@property (nonatomic) BOOL alreadyTrackNewLoadCoverFMP;
@property (retain, nonatomic) AWEAwemeModel *delayedCoverFMPModel;

- (id)tapGuideHasTapItemKey;
- (id)tapGuideShowArrayKey;
- (void)recordMaxReachedIndexPathIfNeeded:(id)a0;
- (void)clearMaxReachedIndex;
- (void).cxx_destruct;
- (void)setObject:(id)a0;
- (id)object:(Class)a0;

@end
