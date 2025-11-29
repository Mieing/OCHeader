@class NSString, NSMutableDictionary;

@interface AWENewHotSpotSearchFeedLoadManager : NSObject <AWENewHotSpotSearchFeedLoadManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *loadHandlerTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)p_handleAppWillResignActive;
- (void)p_cacheAwemesForHotSpotChannelWithLoadHandlerTable:(id)a0 currObj:(id)a1;
- (void)removeLoadHandlerForSearchID:(id)a0;
- (id)loadHandlerForSearchID:(id)a0;
- (void).cxx_destruct;
- (void)addObserver;

@end
