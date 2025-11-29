@class NSMutableDictionary;

@interface AWEPlaylistAnchorTrackerHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *publishTrackerContext;

+ (id)sharedInstance;

- (void)createTrackItemIfNeededForCreateID:(id)a0;
- (void).cxx_destruct;

@end
