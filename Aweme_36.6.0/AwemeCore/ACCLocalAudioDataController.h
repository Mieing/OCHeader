@class ACCAudioExport;

@interface ACCLocalAudioDataController : NSObject

@property (retain, nonatomic) ACCAudioExport *audioExporter;
@property (copy, nonatomic) id /* block */ exportCompletion;

+ (void)clearLocalAudioCache;

- (void)exportLocalAudioWithAssetModel:(id)a0 completion:(id /* block */)a1;
- (id)localMusicFolderPath;
- (void)updateProcessWithView:(id)a0;
- (void)saveLocalAudioWithURL:(id)a0;
- (id)getCurrentLocalAudioMusicModelSortedList;
- (id)generateLocalAudioNameWithExtention:(id)a0;
- (id)createMusicModelWithLocalAudioConfigModel:(id)a0;
- (id)getFilterediTunesMusicModelList;
- (id)getFilteredMediaItems;
- (id)generateMusicModelWithMediaItem:(id)a0;
- (id)saveiTunesMusicCacheWithURL:(id)a0 musicName:(id)a1;
- (id)saveiTunesMusicCoverWithName:(id)a0 iTunesCover:(id)a1;
- (id)getCurrentLocalAudioFileSortedList;
- (void)renameSingleLocalAudioWithAudio:(id)a0 newName:(id)a1 completion:(id /* block */)a2;
- (void)deleteSingleLocalAudio:(id)a0 completion:(id /* block */)a1;
- (id)dateFormatter;
- (void).cxx_destruct;

@end
