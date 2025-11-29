@class NSString;

@interface AWESearchAIGCImageUploadManager : NSObject <AWESearchAIGCImageUploadManagerProtocol>

@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (nonatomic) BOOL hasCanceled;
@property (nonatomic) long long startTimeStamps;
@property (nonatomic) long long endCreateRequestTimeStamps;
@property (nonatomic) long long receiveResponseTimeStamps;
@property (nonatomic) long long endTimeStamps;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) long long monitoStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetMonitor;
- (void)uploadImage:(id)a0 completion:(id /* block */)a1;
- (void)uploadImage:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)handleResponse:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (double)nowTS;
- (void)uploadCompletion:(id /* block */)a0 model:(id)a1 status:(long long)a2;
- (long long)getMonitoStatusFrom:(long long)a0;
- (void)trackUploadMonitor;
- (void).cxx_destruct;
- (void)cancel;

@end
