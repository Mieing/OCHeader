@interface DownloadTaskImpl : DownloadTask

@property struct IODLTask { void /* function */ **x0; } *m_pODLTask;

- (long long)getProgress;
- (id)getStringValue:(id)a0;
- (int)deleteFile;
- (int)setStringValue:(id)a0 paramValue:(id)a1;
- (int)setDownloaderLister:(id)a0;
- (int)start:(id)a0;
- (int)stop;
- (int)start;
- (int)getSpeed;

@end
