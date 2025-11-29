@class NSString, NSMutableDictionary, MMCommonUploadResult, NSMutableArray;
@protocol MMCommonCgiUploaderDelegate;

@interface MMCommonCgiUploader : NSObject <MMCommonCgiUploadTaskDelegate>

@property (weak, nonatomic) id<MMCommonCgiUploaderDelegate> delegate;
@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) NSString *currUploadId;
@property (retain, nonatomic) NSMutableArray *waitingTasks;
@property (retain, nonatomic) NSMutableDictionary *runningTasks;
@property (nonatomic) long long sectionIndexLimit;
@property (nonatomic) long long sectionCount;
@property (nonatomic) long long successCount;
@property (retain, nonatomic) NSString *uploadFileMd5;
@property (retain, nonatomic) NSString *uploadFilePath;
@property (nonatomic) long long scene;
@property (nonatomic) long long fileType;
@property (nonatomic) long long maxConcurrentCount;
@property (nonatomic) unsigned int sectionLength;
@property (retain, nonatomic) NSString *lastUploadId;
@property (retain, nonatomic) NSString *thumbFileId;
@property (retain, nonatomic) NSString *thumbAesKey;
@property (retain, nonatomic) NSString *midFileId;
@property (retain, nonatomic) NSString *midAesKey;
@property (nonatomic) long long midType;
@property (nonatomic) long long liveType;
@property (retain, nonatomic) NSString *liveImageFileId;
@property (retain, nonatomic) NSString *bigFileSignature;
@property (retain, nonatomic) NSString *bigFileAesKey;
@property (retain, nonatomic) NSString *customRequestHeader;
@property (nonatomic) unsigned long long fileSize;
@property (retain, nonatomic) MMCommonUploadResult *result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithDelegate:(id)a0;
- (void)startUpload;
- (void)stopUpload;
- (void)uploadSingleSection;
- (void)uploadInnerSections;
- (void)onTaskSuccess:(id)a0 response:(id)a1;
- (void)onTaskFailure:(id)a0 canRetry:(BOOL)a1 retCode:(long long)a2;
- (id)createSectionTasks;
- (id)createInitialParam;
- (void).cxx_destruct;

@end
