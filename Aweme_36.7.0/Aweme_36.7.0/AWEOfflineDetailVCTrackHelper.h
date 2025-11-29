@class NSMutableSet;

@interface AWEOfflineDetailVCTrackHelper : NSObject

@property (retain, nonatomic) NSMutableSet *videoPlayItemIDs;

+ (id)sharedInstace;

- (void)markVideoPlayWithItemID:(id)a0;
- (BOOL)videoHasPlayedWithItemID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)setup;

@end
