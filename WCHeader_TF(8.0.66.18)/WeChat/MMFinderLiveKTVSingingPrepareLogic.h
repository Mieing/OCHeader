@class MMFinderLiveKTVBox, MMLiveStorageCleanupPinningToken, MMFinderLiveKSKitMusicSong;
@protocol MMLiveUniqueTaskId;

@interface MMFinderLiveKTVSingingPrepareLogic : NSObject

@property (retain, nonatomic) id<MMLiveUniqueTaskId> taskId;
@property (readonly, nonatomic) MMFinderLiveKTVBox *ktvBox;
@property (retain, nonatomic) MMFinderLiveKSKitMusicSong *songData;
@property (retain, nonatomic) MMLiveStorageCleanupPinningToken *songResourcesPinningToken;

- (id)initWithTaskId:(id)a0;
- (void)prepareToStartSing;
- (void)prepareToStartSingAsMinor:(id /* block */)a0;
- (unsigned long long)getCurrSongPrepareState;
- (void)startToPrepareSongResource:(id)a0 resMode:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)onSingPrepareResponse:(id)a0 succ:(BOOL)a1;
- (id)finderTaskId;
- (void).cxx_destruct;

@end
