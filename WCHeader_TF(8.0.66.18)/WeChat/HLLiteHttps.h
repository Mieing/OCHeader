@class NSURLSession, NSMutableDictionary, NSString, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface HLLiteHttps : NSObject <NSURLSessionDelegate>

@property (retain, nonatomic) NSMutableDictionary *mapIDToPacket;
@property (retain, nonatomic) NSURLSession *session;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) long long appID;
@property (nonatomic) BOOL newUser;
@property (readonly, nonatomic) NSOperationQueue *operateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (id)init;
- (id)doBlockInOperateQueue:(id /* block */)a0;
- (id)doBlockAsync:(BOOL)a0 inOperateQueue:(id /* block */)a1;
- (void)asyncDoHttp:(id)a0;
- (void)asyncCancel:(unsigned long long)a0;
- (void)cancel:(unsigned long long)a0;
- (void)doHttp:(id)a0 data:(id)a1;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
