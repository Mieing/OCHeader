@class NSObject, NSFileHandle;
@protocol OS_dispatch_queue, TTDownloadTaskProtocol;

@interface TTDownloadFileWriter : NSObject

@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialFileQueue;
@property (copy, nonatomic) id /* block */ progressCallback;
@property (retain, nonatomic) id<TTDownloadTaskProtocol> task;
@property (nonatomic) long long current;
@property (nonatomic) long long total;
@property (nonatomic) BOOL isWritingError;

- (void)appendFile:(id)a0;
- (void)appendFileInternalSinceOS13:(id)a0;
- (void)appendFileInternalBeforeOS13:(id)a0;
- (void)markErrorAndCancelTask;
- (void)closeFileHandleInternal;
- (id)initWithPath:(id)a0 progressCallback:(id /* block */)a1 error:(out id *)a2;
- (void)asyncWriteFileAndUpdateProgress:(id)a0;
- (void)asyncCloseFileHandle;
- (void).cxx_destruct;
- (void)setDownloadTask:(id)a0;
- (void)updateProgress:(id)a0;

@end
