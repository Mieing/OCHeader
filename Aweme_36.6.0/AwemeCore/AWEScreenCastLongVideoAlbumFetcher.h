@protocol AWEHttpTask;

@interface AWEScreenCastLongVideoAlbumFetcher : NSObject

@property (weak, nonatomic) id<AWEHttpTask> requestEpisodeTask;

- (void)fetchLongVideoAlbumEpisodeList:(id)a0;
- (void).cxx_destruct;

@end
