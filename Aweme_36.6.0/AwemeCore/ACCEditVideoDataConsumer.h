@interface ACCEditVideoDataConsumer : NSObject

+ (void)clearAllCache;
+ (BOOL)isCacheDirPathSetted;
+ (id)readDictionaryFromPath:(id)a0 error:(id *)a1;
+ (BOOL)saveDictionaryToPath:(id)a0 dict:(id)a1 error:(id *)a2;
+ (void)loadVideoDataFromFile:(id)a0 completion:(id /* block */)a1;
+ (void)getVolumnWaveWithVideoData:(id)a0 pointsCount:(unsigned long long)a1 completion:(id /* block */)a2;
+ (id)getVolumnWaveWithAudioURL:(id)a0 waveformduration:(double)a1 pointsCount:(unsigned long long)a2;
+ (void)saveVideoData:(id)a0 toFileUsePropertyListSerialization:(id)a1 completion:(id /* block */)a2;
+ (void)loadVideoDataFromDictionary:(id)a0 draftFolder:(id)a1 completion:(id /* block */)a2;
+ (id)defaultCachePath;
+ (BOOL)isPlaceholderVideoAssets:(id)a0;
+ (id)cacheDirPath;
+ (void)setCacheDirPath:(id)a0;

@end
