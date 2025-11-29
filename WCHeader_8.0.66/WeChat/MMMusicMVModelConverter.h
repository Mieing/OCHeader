@interface MMMusicMVModelConverter : NSObject

+ (id)musicMVModelFromFinderDataItem:(id)a0 finderObject:(id)a1;
+ (id)finderMVInfoFromMusicMVModel:(id)a0;
+ (id)arrTrackItemFromFinderTrackList:(id)a0;
+ (id)finderTrackListFromArrTrackItem:(id)a0;
+ (id)mvSongInfoFromFinderSongInfo:(id)a0;
+ (id)finderSongInfoFromMVSongInfo:(id)a0;
+ (id)mvOriginalInfoFromFinderOriginalInfo:(id)a0;
+ (id)finderOriginalInfoFromMVOriginalInfo:(id)a0;
+ (id)genMusicIdFromMVModel:(id)a0;
+ (id)genMusicIdFromSongInfo:(id)a0 mvObjectId:(id)a1 mvCreaateTime:(double)a2;
+ (id)genMusicInfoFromMVModel:(id)a0;
+ (id)genMusicInfoFromSongInfo:(id)a0;
+ (void)updateOldMusicInfo:(id)a0 WithNewMusicInfo:(id)a1;
+ (void)fillSongStatusResponse:(id)a0 intoSongInfo:(id)a1;
+ (void)fillSongStatusResponse:(id)a0 intoMusicInfo:(id)a1;
+ (id)listenMusicInfoWithSongId:(id)a0 musicInfo:(id)a1;

@end
