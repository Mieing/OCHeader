@class NSArray, NSProgress, NSDictionary, NSError, NSObject, NSString;
@protocol EffectPlatformRequestDelegate, OS_dispatch_semaphore;

@interface IESDelegateFileDownloadTask : NSOperation <IESFileDownloadTaskProtocol> {
    BOOL executing;
    BOOL finished;
}

@property (copy, nonatomic) NSArray *urls;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) NSDictionary *extraInfoDict;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (copy, nonatomic) NSDictionary *downloadParameters;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (readonly, copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) id<EffectPlatformRequestDelegate> requestDelegate;
@property (nonatomic) double createTime;
@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestDelegateWithIndex:(unsigned long long)a0;
- (void)downloadRequestAtIndex:(unsigned long long)a0;
- (id)initWithURL:(id)a0 filePath:(id)a1;
- (void)updateExtraInfoDict:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAsynchronous;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isExecuting;
- (void)dealloc;
- (void)main;
- (BOOL)isFinished;
- (void)finishExecuting;

@end
