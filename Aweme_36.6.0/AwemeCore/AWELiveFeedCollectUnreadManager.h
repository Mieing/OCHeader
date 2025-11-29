@class NSMutableDictionary;

@interface AWELiveFeedCollectUnreadManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *storeLiveFeeds;
@property (retain, nonatomic) NSMutableDictionary *tempReadFeeds;
@property (retain, nonatomic) NSMutableDictionary *storeTrackExtra;

+ (id)sharedManager;

- (void)appendLiveFeedsWithEnterFrom:(id)a0 withFeedList:(id)a1 withTrackExtra:(id)a2;
- (void)readLiveFeedWithEnterFrom:(id)a0 withRoomID:(id)a1;
- (void)refreshPostUnreadRoomsWithEnterFrom:(id)a0;
- (void)quitInnerFeedPostUnreadRoomsWithEnterFrom:(id)a0;
- (void)addNotification;
- (void)postLocalCacheUnreadRooms;
- (void)postUnreadRoomsWithEnterFrom:(id)a0 withIsRefresh:(BOOL)a1;
- (id)enterFromReflectChannelId:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationWillTerminate;

@end
