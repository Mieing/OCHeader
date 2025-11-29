@class NSString, NSError;

@interface MessageTransferTask : NSObject <PBCoding>

@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) int progress;
@property (nonatomic) unsigned long long pauseTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_taskId;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_state;
+ (void)PBArrayAdd_progress;
+ (void)PBArrayAdd_pauseTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithType:(unsigned long long)a0 taskId:(id)a1;
- (void)calcInitialState;
- (BOOL)isEqual:(id)a0;
- (BOOL)isPaused;
- (BOOL)isFail;
- (BOOL)isInProcess;
- (id)taskName;
- (unsigned long long)fileSize;
- (id)fileSizeText;
- (id)filePath;
- (id)fileExt;
- (BOOL)isFileExist;
- (long long)secondsBeforeExpired;
- (long long)daysBeforeExpired;
- (BOOL)isFileExpired;
- (BOOL)canResumeTransfer;
- (void)startTransfer;
- (void)pauseTransfer;
- (void)stopTransfer;
- (BOOL)enableRestore;
- (void).cxx_destruct;

@end
