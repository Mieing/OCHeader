@class NSMutableArray;

@interface AFDLocalRemoveDuplicateStoryManager : NSObject

@property (retain, nonatomic) NSMutableArray *localPlayerItemIDArray;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)addPlayedItemID:(id)a0;
- (BOOL)isPlayedItemID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
