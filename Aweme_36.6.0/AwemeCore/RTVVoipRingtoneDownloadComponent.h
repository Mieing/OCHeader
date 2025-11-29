@interface RTVVoipRingtoneDownloadComponent : NSObject

- (id)createDirIfNotExist;
- (void)setTargetPathExcludedFromBackupiCloud:(id)a0;
- (id)createDirIfNotExist:(id)a0;
- (id)fileNameWithURLList:(id)a0;
- (id)fileExtensionWithURLList:(id)a0;
- (void)downloadWithMusicModel:(id)a0 completion:(id /* block */)a1;
- (void)removeWithMusicModel:(id)a0 completion:(id /* block */)a1;
- (id)fileNameWithModel:(id)a0;
- (void)downloadWithModel:(id)a0 urls:(id)a1 completion:(id /* block */)a2;
- (id)ringtoneDirectorPath;
- (id)currentUserRingtoneDirectorPath;

@end
