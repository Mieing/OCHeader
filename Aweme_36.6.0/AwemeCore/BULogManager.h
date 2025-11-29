@class NSString, NSDateFormatter, NSFileHandle, NSObject;
@protocol OS_dispatch_queue;

@interface BULogManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logQueue;
@property (nonatomic) long long maxFileCount;
@property (copy, nonatomic) NSString *currentFilePath;
@property (retain, nonatomic) NSFileHandle *currentFileHandle;
@property (retain, nonatomic) NSDateFormatter *messageDateFormatter;
@property (nonatomic) BOOL hasFirstLogSetup;
@property (nonatomic) long long level;
@property (nonatomic) long long mode;

+ (void)_prx_logWithLevel:(long long)a0 format:(id)a1 arguments:(char *)a2;
+ (void)_prx_logWithFormat:(id)a0 arguments:(char *)a1;
+ (void)warningLogWithFormat:(id)a0;
+ (void)serverLogWithFormat:(id)a0;
+ (void)verboseLogWithFormat:(id)a0;
+ (void)errorLogWithFormat:(id)a0;
+ (void)internalLogWithFormat:(id)a0;
+ (void)debugLogWithFormat:(id)a0;
+ (void)infoLogWithFormat:(id)a0;
+ (id)sharedInstance;

- (void)_prx_logWithMsg:(id)a0;
- (void)_prx_logIntoFileWithMessage:(id)a0;
- (id)_prx_currentParentDir;
- (id)_prx_currentFilePath;
- (void)_prx_optimizeFileCount;
- (id)logFileNameArray;
- (id)filePathWithFileName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
