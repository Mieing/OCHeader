@class NSMutableSet, NSRecursiveLock;

@interface AWEAwemeOfflinePlayedCheckManager : NSObject

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) long long count;
@property (retain, nonatomic) NSMutableSet *playedVideoItemIDs;

+ (id)sharedInstance;

- (void)playedItemIDArrayReport;
- (void)savePlayedVideoItemID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
