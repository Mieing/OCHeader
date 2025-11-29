@class AFDVideoCachePersistencyController;

@interface AFDFriendsFeedVideoCacheController : NSObject

@property (class, readonly, nonatomic) AFDFriendsFeedVideoCacheController *sharedInstance;

@property (retain, nonatomic) AFDVideoCachePersistencyController *persistencyController;

- (void)persistVideoCacheWithURLKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
