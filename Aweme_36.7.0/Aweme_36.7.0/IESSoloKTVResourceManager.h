@class IESSoloKTVDraftSongModel, NSString, IESSoloKTVDraftVideoModel, NSArray, NSOperationQueue, NSMutableDictionary, NSObject, IESLiveKTVDownloaderV2, IESLiveKtvSongStruct;
@protocol OS_dispatch_queue;

@interface IESSoloKTVResourceManager : NSObject

@property (copy, nonatomic) NSString *rootDir;
@property (copy, nonatomic) NSString *draftDir;
@property (copy, nonatomic) NSString *videoDir;
@property (copy, nonatomic) NSString *voiceDir;
@property (copy, nonatomic) NSString *albumDir;
@property (copy, nonatomic) NSString *buildDir;
@property (copy, nonatomic) NSString *songDir;
@property (copy, nonatomic) NSString *fontDir;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IESLiveKTVDownloaderV2 *downloader;
@property (retain, nonatomic) NSOperationQueue *downloadQueue;
@property (retain, nonatomic) IESLiveKtvSongStruct *model;
@property (retain, nonatomic) IESSoloKTVDraftSongModel *song;
@property (retain, nonatomic) IESSoloKTVDraftVideoModel *video;
@property (copy, nonatomic) NSString *videoKey;
@property (copy, nonatomic) NSArray *videoUrls;
@property (nonatomic) double startDownloadTime;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ downloadCompletion;
@property (nonatomic) float lyricPro;
@property (nonatomic) float videoPro;
@property (nonatomic) float originalPro;
@property (nonatomic) float accompanyPro;
@property (nonatomic) float midiPro;
@property (nonatomic) float lyricWeight;
@property (nonatomic) float videoWeight;
@property (nonatomic) float originalWeight;
@property (nonatomic) float accompanyWeight;
@property (nonatomic) float midiWeight;
@property (nonatomic) long long resourceUpdatedState;
@property (retain, nonatomic) NSMutableDictionary *fontCache;

- (void)deleteAllResource;
- (void)createDirIfNeed:(id)a0;
- (void)cancelAllDownloadTasks;
- (id)createAlbumSavePath:(id)a0;
- (id)videoSaveDir;
- (void)deleteUserVoice;
- (void)fetchSongWithModelV2:(id)a0 origin:(BOOL)a1 videoUrls:(id)a2 videoKey:(id)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (void)fetchSongWithState:(long long)a0 model:(id)a1 videoUrls:(id)a2 videoKey:(id)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (id)createAudioSavePath:(id)a0;
- (void)fetchAttributeFontSync:(id)a0;
- (void)createAllDirIfNeed;
- (void)fillPathInfoWithModel:(id)a0 resultModel:(id)a1;
- (void)preCheckCacheResourceWithModelV2:(id)a0 song:(id)a1 video:(id)a2 origin:(BOOL)a3;
- (void)downloadLyricOperation;
- (void)downloadMidiOperation;
- (void)downloadOriginalOperation;
- (void)downloadAccompanyOperation;
- (void)downloadVideoOperation;
- (void)monitorWithError:(id)a0 downloadUrls:(id)a1 resourceType:(id)a2 resourceKey:(id)a3;
- (unsigned long long)getTimeOutTime:(float)a0;
- (void)privateFetchVideoWithUrlArray:(id)a0 videoKey:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (unsigned long long)getTimeOutTime;
- (void)privateFetchVideoWithUrl:(id)a0 videoKey:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)deleteDir:(id)a0;
- (id)createBuildPath:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
