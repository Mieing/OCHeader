@class NSObject, NSString, IESLiveKTVResourceSongItem, NSOperationQueue, IESLiveKTVDownloaderV2, NSMutableArray;
@protocol OS_dispatch_queue, HTSKVStore, IESLiveKTVFullLinkMonitor;

@interface IESLiveKTVResourceManager : NSObject <IESLiveKTVDownloadService>

@property (retain, nonatomic) IESLiveKTVDownloaderV2 *downloader;
@property (retain, nonatomic) NSString *songDir;
@property (retain, nonatomic) NSMutableArray *highQueue;
@property (retain, nonatomic) NSMutableArray *lowQueue;
@property (retain, nonatomic) NSOperationQueue *resQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *optQueue;
@property (retain, nonatomic) id<HTSKVStore> kvStore;
@property (retain, nonatomic) IESLiveKTVResourceSongItem *downloadingItem;
@property (nonatomic) BOOL downloadOpt;
@property (weak, nonatomic) id<IESLiveKTVFullLinkMonitor> fullLinkMonitor;
@property (copy, nonatomic) id /* block */ excludeSongBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchSongWithModel:(id)a0 resType:(long long)a1 originalFirst:(BOOL)a2 priority:(BOOL)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (BOOL)isSongDownloading:(long long)a0;
- (void)fetchSongWithModel:(id)a0 resType:(long long)a1 originalFirst:(BOOL)a2 needCutInLine:(BOOL)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (void)cancelAllDownloadTasks;
- (int)downloadingCount;
- (void)startDownloadIfNeed;
- (void)updateCache:(long long)a0 timestamp:(double)a1;
- (void)fetchSongArrayWithModel:(id)a0 resType:(long long)a1 originalFirst:(BOOL)a2 priority:(BOOL)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (long long)getFreeSizeMB;
- (void)addSongItem:(id)a0 priority:(BOOL)a1;
- (id)popPrioritySongItem;
- (void)startDownloadV2:(id)a0;
- (int)cleanLocalFileIfNeed:(int)a0;
- (void)downloadMidi;
- (void)downloadLyric;
- (void)downloadOriginal;
- (void)downloadAccompany;
- (void)downloadMidiWithItem:(id)a0;
- (void)downloadLyricWithItem:(id)a0;
- (void)downloadOriginalWithItem:(id)a0;
- (void)downloadAccompanyWithItem:(id)a0;
- (id)downloadItemSync:(id)a0 url:(id)a1 type:(long long)a2 logKey:(id)a3 timeout:(int)a4;
- (void)tryDownloadCompletion:(id)a0 type:(long long)a1 error:(id)a2;
- (void)trackSongDownloadTime:(id)a0 isFirst:(BOOL)a1 duration:(double)a2;
- (void)deleteDirExpiredFile:(id)a0 type:(long long)a1;
- (void)trackItem:(id)a0 error:(id)a1 url:(id)a2 type:(long long)a3 logKey:(id)a4 duration:(double)a5;
- (void)cancelDownloadTaskWithMusicId:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isDownloading;
- (void)startDownload:(id)a0;

@end
