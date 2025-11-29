@class NSString, NSObject, NSFileHandle;
@protocol OS_dispatch_queue, CastProxyLogDelegate;

@interface BDCastProxyLogManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy, nonatomic) NSString *directory;
@property (copy, nonatomic) NSString *currentFile;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (nonatomic) unsigned long long line;
@property (weak, nonatomic) id<CastProxyLogDelegate> delegate;
@property (nonatomic) BOOL enableConsoleLog;

+ (id)logger;

- (void)deleteOldFiles;
- (unsigned long long)totalSizeOfFileArray:(id)a0;
- (void)logWithFileInfo:(id)a0 message:(id)a1 level:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
