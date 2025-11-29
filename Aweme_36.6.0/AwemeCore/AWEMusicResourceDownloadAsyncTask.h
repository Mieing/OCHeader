@class NSString, AWERecordResourceMusicModel;

@interface AWEMusicResourceDownloadAsyncTask : NSObject <AWERecordResourceDownloadTaskProtocol>

@property (retain, nonatomic) AWERecordResourceMusicModel *musicModelConfig;
@property (copy, nonatomic) id /* block */ resourceDownloadCompletion;
@property (copy, nonatomic) NSString *taskIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downloadTaskWithResourceModel:(id)a0 completion:(id /* block */)a1;

- (BOOL)currentTaskIsExistWith:(id)a0;
- (void)downloadMusic;
- (void)downloadMusicResourceWithMusicModel:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)taskType;

@end
