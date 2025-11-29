@class NSString, VCMDLCaseInsensitiveDictionary, MDLDownloadTask;

@interface VCMDLImagerLoaderTask : NSObject <MDLTaskCallback>

@property (retain, nonatomic) MDLDownloadTask *task;
@property (copy, nonatomic) id /* block */ responseBlock;
@property (copy, nonatomic) id /* block */ dataBlock;
@property (copy, nonatomic) id /* block */ errorBlock;
@property (copy, nonatomic) id /* block */ infoBlock;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) VCMDLCaseInsensitiveDictionary *headers;
@property (nonatomic) BOOL hasStopped;
@property (nonatomic) BOOL isCompleted;
@property (nonatomic) float priority;
@property (nonatomic) long long timeoutInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_stopTask:(id)a0;
- (long long)onInfos:(long long)a0 key:(id)a1 value:(id)a2;
- (long long)onData:(long long)a0 offset:(long long)a1 size:(long long)a2 data:(const void *)a3;
- (long long)onResponse:(long long)a0 httpCode:(long long)a1 fileLength:(long long)a2 headers:(id)a3;
- (long long)onError:(long long)a0 code:(long long)a1 message:(id)a2;
- (void).cxx_destruct;
- (void)stop:(long long)a0;
- (void)resume;
- (void)cancel;
- (long long)onComplete;

@end
