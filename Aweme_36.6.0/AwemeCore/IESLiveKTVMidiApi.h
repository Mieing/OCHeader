@class NSNumber;

@interface IESLiveKTVMidiApi : HTSLiveApi

@property (retain, nonatomic) NSNumber *roomID;

- (id)initWithRoomID:(id)a0;
- (void)getMidiConfigWithCompletion:(id /* block */)a0;
- (void)reportMusicScore:(double)a0 musicID:(id)a1 singerID:(id)a2 completion:(id /* block */)a3;
- (void)reportMusicScore:(double)a0 musicID:(id)a1 singerID:(id)a2 sungCount:(long long)a3 totalCount:(long long)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;

@end
