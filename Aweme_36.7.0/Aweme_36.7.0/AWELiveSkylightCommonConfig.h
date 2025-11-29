@class NSObject;
@protocol AWELiveSkylightViewControllerProtocol;

@interface AWELiveSkylightCommonConfig : NSObject

@property (class, readonly, weak, nonatomic) NSObject<AWELiveSkylightViewControllerProtocol> *skylightViewController;

@property (weak, nonatomic) NSObject<AWELiveSkylightViewControllerProtocol> *skylightViewController;

+ (BOOL)updateMixSortEnable;
+ (BOOL)skylightLiveLongChainEnable;
+ (BOOL)specialFollowSkylightEnable:(id)a0;
+ (id)capsuleAllWatchedText;
+ (BOOL)enableLiveHighValueRelationRefresh;
+ (BOOL)skylightLivePageEnable;
+ (BOOL)skylightLivePageIgnoreAutoRefresh;
+ (unsigned long long)updateMixSortCellType;
+ (BOOL)canCreateUnreadElement;
+ (void)setSkylightViewControllerForDouYinLite:(id)a0;
+ (id)insertPositionConfig;
+ (BOOL)shouldShowSkylightUnread;
+ (id)orderOfSkylightElements;
+ (long long)skylightAutoRefreshDuration;
+ (BOOL)skylightUnreadDotUndertakeEnable;
+ (BOOL)skylightUnreadDotUndertakeStyleOne;
+ (unsigned long long)updateMixSortCelInsertStrategy;
+ (BOOL)isMixSortToBeInsertedCellType:(unsigned long long)a0;
+ (BOOL)shouldReConstructDataSourceWithCellType:(unsigned long long)a0;
+ (BOOL)shouldMixSortWithCellType:(unsigned long long)a0;
+ (id)insertPositionForDefaultUser;
+ (id)insertPositionForLiveActiveUser;
+ (id)insertPositionForUpdateInActiveUser;
+ (BOOL)skylightDisappearAnimationStopEnable;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
