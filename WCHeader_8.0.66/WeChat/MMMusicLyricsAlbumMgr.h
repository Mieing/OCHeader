@class NSString, NSMutableArray;

@interface MMMusicLyricsAlbumMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate> {
    NSMutableArray *m_arrMusicItems;
    NSString *m_nsLyricsRootPath;
    NSString *m_nsAlbumCoverRootPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)GetLyricsAndAlbumCoverByMusicInfo:(id)a0;
- (id)getLyricFileName:(id)a0 AndSinger:(id)a1;
- (id)getAlbumCoverName:(id)a0 AndSinger:(id)a1;
- (id)getLyricsFromFile:(id)a0;
- (BOOL)saveLyricsToFile:(id)a0 FilePath:(id)a1;
- (BOOL)saveAlbumCoverToFile:(id)a0 FilePath:(id)a1;
- (unsigned long long)indexOfMusicByWeUrl:(id)a0;
- (BOOL)GetLyricsAndAlbumFromSvr:(id)a0;
- (void)handleGetLyricsAndAlbumResp:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
