@class NSString, MMLiveStorageCleanupPinningToken;

@interface MMFinderLiveReplayStopgapPlayerViewModel : MMFinderLiveWcPlayerViewModel

@property (retain, nonatomic) MMLiveStorageCleanupPinningToken *resourcesPinningToken;
@property (retain, nonatomic) NSString *filename;

- (id)createPlayerInfo;
- (id)generateDownloadArgsWrap;
- (id)videoSavePath;
- (id)videoFormatPath;
- (void)onPlayerVideoFrameOut:(id)a0;
- (void).cxx_destruct;

@end
