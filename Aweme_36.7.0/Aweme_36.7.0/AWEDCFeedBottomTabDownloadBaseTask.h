@class NSMutableArray, AWEDCFeedBottomTabDataModel, NSString, NSLock, AWEHPImageBatchDownloadTask;
@protocol AWEHPBottomTabSpecialEntryModelProtocol;

@interface AWEDCFeedBottomTabDownloadBaseTask : NSObject <AWEDCFeedBottomTabTaskProtocol>

@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) BOOL hasDownload;
@property (retain, nonatomic) id<AWEHPBottomTabSpecialEntryModelProtocol> entryModel;
@property (retain, nonatomic) AWEHPImageBatchDownloadTask *downloadTask;
@property (retain, nonatomic) NSMutableArray *completions;
@property (readonly, nonatomic) AWEDCFeedBottomTabDataModel *dataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tryGenerateEntryModelWithDownloadMap:(id)a0;
- (id)tryGenerateDownloadURLSet;
- (id)p_tryGenerateEntryModelWithDownloadMap:(id)a0;
- (void)p_startDownloadTask:(id)a0;
- (id)getEntryModel;
- (void)loadWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithDataModel:(id)a0;

@end
