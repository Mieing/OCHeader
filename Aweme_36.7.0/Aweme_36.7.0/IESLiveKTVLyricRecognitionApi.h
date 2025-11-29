@interface IESLiveKTVLyricRecognitionApi : HTSLiveApi

- (void)getSingSongInfoWithRoomID:(id)a0 fingerPrintsStr:(id)a1 source:(id)a2 completion:(id /* block */)a3;
- (void)requestLyricRecognition:(id)a0 isOriginal:(BOOL)a1 source:(int)a2 completion:(id /* block */)a3;
- (void)notifyRoomSongChangeWithRoomID:(id)a0 songID:(id)a1 simGroupID:(long long)a2 sameGroupID:(long long)a3 needRandomMV:(unsigned long long)a4 mvPlayingStatus:(int)a5 completion:(id /* block */)a6;

@end
