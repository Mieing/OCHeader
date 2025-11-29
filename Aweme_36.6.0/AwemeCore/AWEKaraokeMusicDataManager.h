@interface AWEKaraokeMusicDataManager : NSObject

+ (BOOL)localPathExists:(id)a0 expectDirectory:(BOOL)a1;
+ (id)generateLocalPathForURL:(id)a0 fileExtension:(id)a1;
+ (void)downloadMusicWithURL:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)clearDownloadedFile;
+ (id)fileDirectory;

@end
