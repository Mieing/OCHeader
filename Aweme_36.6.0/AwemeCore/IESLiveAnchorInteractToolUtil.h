@interface IESLiveAnchorInteractToolUtil : NSObject

+ (void)createDirIfNeeded:(id)a0;
+ (void)cleanMusicInteractEffectResource;
+ (void)downLoadCoverWithSong:(id)a0 completion:(id /* block */)a1;
+ (void)downLoadAndParseBeatsWithSong:(id)a0 completion:(id /* block */)a1;
+ (id)musicInteractEffectFilePath:(id)a0 prefix:(id)a1 suffix:(id)a2;
+ (void)downLoadFileWithURL:(id)a0 localPath:(id)a1 useCache:(BOOL)a2 completion:(id /* block */)a3;
+ (void)parseBeatsInfoWithFilePath:(id)a0 completion:(id /* block */)a1;
+ (id)musicInteractEffectDirPath;
+ (void)removeDirIfNeeded:(id)a0;
+ (void)asyncExecuteTask:(id /* block */)a0;
+ (void)asyncExecuteTaskOnMain:(id /* block */)a0;
+ (id)musicInteractEffectDir;

@end
