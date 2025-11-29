@class NSString, NSMutableDictionary;

@interface MMListenGetLyricService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *musicKey2GetLyricResponseItem;
@property (retain, nonatomic) NSMutableDictionary *musicKey2GetLyricResponseTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)checkCGIBaseRespSuccess:(id)a0;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)sendGetListenLyricWithSongId:(id)a0 musicInfo:(id)a1 completion:(id /* block */)a2;
- (void)sendGetListenItemWithSongId:(id)a0 musicInfo:(id)a1 completion:(id /* block */)a2;
- (id)lyricItemWithListenId:(id)a0 listenGetLyricResponse:(id)a1;
- (id)genMusicKeyWithMusicInfo:(id)a0;
- (void).cxx_destruct;

@end
