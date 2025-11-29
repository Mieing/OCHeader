@class MMLRUCache, NSString;

@interface EditVideoBGMCommon : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MMLRUCache *urlToFilePathMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)downloadMusic:(id)a0 completion:(id /* block */)a1;
+ (id)genLyricsFromLrcString:(id)a0;
+ (id)setAllText:(id)a0 andSpcifiStr:(id)a1 withColor:(id)a2 specifiStrFont:(id)a3;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)_saveMap:(id)a0;
- (id)_restoreMap;
- (id)getMusicPath:(id)a0;
- (id)getMusicPathWithMusicData:(id)a0;
- (id)saveMusicPathWithMusicData:(id)a0 components:(id)a1;
- (BOOL)hasDownloadData:(id)a0;
- (void)cachedMusicData:(id)a0 WithFullPath:(id)a1;
- (void).cxx_destruct;

@end
