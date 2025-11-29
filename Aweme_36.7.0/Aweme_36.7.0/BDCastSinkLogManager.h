@class NSString, NSObject, NSFileHandle;
@protocol OS_dispatch_queue;

@interface BDCastSinkLogManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy, nonatomic) NSString *directory;
@property (copy, nonatomic) NSString *currentFile;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (nonatomic) unsigned int line;
@property (nonatomic) BOOL enableConsoleLog;

+ (id)sharedInstance;

- (void)deleteOldFiles;
- (unsigned long long)totalSizeOfFileArray:(id)a0;
- (void)enableConsoleLog:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)log:(id)a0;
- (id)buildInfo;

@end
