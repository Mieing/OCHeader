@class NSMutableDictionary;

@interface AWEStationDataNetworkManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *networkSectionDictionary;
@property (nonatomic) BOOL isInteractionEnabled;
@property (nonatomic) BOOL isWaitingGoToVideoDetailList;

+ (id)sharedInstance;

- (void)addNotificationsObservers;
- (void)fetchStationVideoDetailListDataWithIronManId:(id)a0 hashTagName:(id)a1 count:(long long)a2;
- (id)videoDetailListDataManagerForIronManId:(id)a0;
- (void)goToVideoDetailListSuccessBlock:(id /* block */)a0 ironManId:(id)a1 expectedMinCursor:(long long)a2;
- (void)_startRequestWithIronManId:(id)a0 hashTagName:(id)a1;
- (void)handleIronManEnterNotification:(id)a0;
- (void)handleIronManExitNotification:(id)a0;
- (void).cxx_destruct;

@end
