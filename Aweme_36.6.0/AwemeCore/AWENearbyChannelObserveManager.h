@class NSMutableDictionary, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface AWENearbyChannelObserveManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *tabAppearStatusDic;
@property (retain, nonatomic) NSMutableDictionary *didAppearCallbacks;
@property (retain, nonatomic) NSMutableDictionary *willDisappearCallbacks;
@property (retain, nonatomic) NSMutableArray *topContainerAppearCallbacks;
@property (retain, nonatomic) NSMutableArray *topSegmentControlShowCallbacks;
@property (retain, nonatomic) NSMutableDictionary *topTabScrollEndCallbacks;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *syncLock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *containerAppearLock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *segmentShowLock;
@property (nonatomic) BOOL topTabContainerAppear;
@property (nonatomic) BOOL topSegmentControllShow;
@property (nonatomic) BOOL isInNearbyTab;
@property (nonatomic) BOOL nearbyDidAppear;
@property (nonatomic) BOOL grouponDidAppear;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *enterNearbyChannelLock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *leaveNearbyChannelLock;
@property (retain, nonatomic) NSMutableArray *enterNearbyChannelCallbacks;
@property (retain, nonatomic) NSMutableArray *leaveNearbyChannelCallbacks;
@property (nonatomic) BOOL isInGrouponTab;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *enterGrouponChannelLock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *leaveGrouponChannelLock;
@property (retain, nonatomic) NSMutableArray *enterGrouponChannelCallbacks;
@property (retain, nonatomic) NSMutableArray *leaveGrouponChannelCallbacks;
@property (retain, nonatomic) NSMutableDictionary *tabItemsShowStatusCallbacks;
@property (nonatomic) BOOL isInSinglePage;
@property (retain, nonatomic) NSString *singlePagePreviousEnterFrom;
@property (nonatomic) long long userScrollTopTab;
@property (readonly, nonatomic) BOOL isNearbyTabTopViewController;
@property (readonly, nonatomic) BOOL isInGrouponTabTopViewController;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)channelViewDidAppear:(id)a0;
- (BOOL)isTopTabContainerAppear;
- (void)channelWillDisappear:(id)a0;
- (void)topTabContainerChangeAppear:(id)a0;
- (void)topSegmentControllChangeShow:(id)a0;
- (void)recordToptabScrollEnd;
- (void)observeTabItemShowStatusWith:(id)a0 show:(BOOL)a1;
- (void)recordEnterNearby;
- (void)recordLeaveNearby;
- (void)recordDidAppearWithPageType:(long long)a0;
- (void)recordWillDisappearWithPageType:(long long)a0;
- (BOOL)tabViewIsAppearedWithChannelId:(id)a0;
- (BOOL)isTopTabAndNotInNearbyTab;
- (BOOL)isInChannelWithPageType:(long long)a0;
- (void)registerChannelDidAppearWithChannelId:(id)a0 callback:(id /* block */)a1;
- (void)registerChannelWillDisAppearWithChannelId:(id)a0 callback:(id /* block */)a1;
- (void)registerTopTabContainerDidAppearWithCallBack:(id /* block */)a0;
- (void)registerSegmentControllChangeDidShowWithCallBack:(id /* block */)a0;
- (void)registerEnterNearbyWithCallBack:(id /* block */)a0;
- (void)registerLeaveNearbyWithCallBack:(id /* block */)a0;
- (void)registerTabItemShowWithChannelId:(id)a0 callback:(id /* block */)a1;
- (void)registerEnterGrouponWithCallBack:(id /* block */)a0;
- (void)registerLeaveGrouponWithCallBack:(id /* block */)a0;
- (void)registerToptabScrollEndWithKey:(id)a0 callBack:(id /* block */)a1;
- (void)unRegisterToptabScrollEndWithKey:(id)a0;
- (void)recordEnterGroupon;
- (void)recordLeaveGroupon;
- (void)recordEnterSinglePageWithPreviousEnterFrom:(id)a0;
- (void)recordLeaveSinglePage;
- (void)recordUserScrollTopTab;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)addObserver;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
