@class NSDictionary, NSMutableSet, NSString;

@interface AWEPlaylistAnchorTrackItem : NSObject

@property (retain, nonatomic) NSMutableSet *createdPlaylists;
@property (copy, nonatomic) NSDictionary *musicianTrackerParams;
@property (copy, nonatomic) NSString *playlistActivityName;

- (id)trackParamsWithPlaylistID:(id)a0;
- (void).cxx_destruct;

@end
