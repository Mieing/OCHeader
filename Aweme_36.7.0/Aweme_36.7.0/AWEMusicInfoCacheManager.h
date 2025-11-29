@class NSMutableDictionary;

@interface AWEMusicInfoCacheManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *musicCollectStatusCache;
@property (retain, nonatomic) NSMutableDictionary *lunaSongAppendPlaylistStatusCache;

+ (id)sharedInstance;

- (void)musicCollectedStatusChanged:(id)a0;
- (id)musicCollectStatusForMusicID:(id)a0;
- (void)updateMusicStatusFromCache:(id)a0;
- (void)updateAppendPlaylistButtonCollected:(id)a0;
- (id)lunaAppendPlaylistStatusForTrackID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
