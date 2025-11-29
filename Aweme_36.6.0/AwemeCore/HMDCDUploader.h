@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface HMDCDUploader : NSObject

@property (copy, nonatomic) NSString *coredumpRootPath;
@property (copy, nonatomic) NSString *coredumpPath;
@property (copy, nonatomic) NSString *coredumpZipPath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *coredumpQueue;
@property (retain, nonatomic) NSMutableSet *uploadingFileNames;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *uploadSemaphore;
@property (nonatomic) unsigned long long CDZipFileSizeLimitMB;

+ (id)removableFileDirectoryPath;

- (id)zipFileCounterDic;
- (void)zipAndUploadCoreDump;
- (id)processCoreDump;
- (void)_uploadZip;
- (void)_uploadCoreDumpForFileName:(id)a0;
- (void)_uploadCoreDumpForPath:(id)a0;
- (BOOL)deleteZipFileIfNeedWithFileName:(id)a0;
- (void)increaseCounterWithFileName:(id)a0;
- (void)cleanCounterWithFileName:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
