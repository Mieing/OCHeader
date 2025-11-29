@class NSString, NSDateFormatter, NSFileHandle, NSObject;
@protocol OS_dispatch_queue, BDByteCastLogDelegate;

@interface BDByteCastLogManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy, nonatomic) NSString *directory;
@property (copy, nonatomic) NSString *currentFile;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (nonatomic) unsigned int line;
@property (nonatomic) BOOL enableVerboseLog;
@property (retain, nonatomic) NSDateFormatter *fileFormatter;
@property (retain, nonatomic) NSDateFormatter *formatter;
@property (weak, nonatomic) id<BDByteCastLogDelegate> delegate;
@property (nonatomic) BOOL enableConsoleLog;

- (id)initWithContextId:(id)a0;
- (void)logWithFileInfo:(id)a0 andMessage:(id)a1 andLevel:(unsigned long long)a2;
- (void)deleteOldFiles;
- (unsigned long long)totalSizeOfFileArray:(id)a0;
- (void).cxx_destruct;
- (id)buildInfo;

@end
