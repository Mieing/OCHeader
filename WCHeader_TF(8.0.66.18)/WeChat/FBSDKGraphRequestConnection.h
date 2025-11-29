@class FBSDKLogger, NSString, FBSDKGraphRequestMetadata, NSURLSession, NSOperationQueue, NSMutableArray, FBSDKGraphErrorRecoveryProcessor, NSHTTPURLResponse, FBSDKURLSessionTask;
@protocol FBSDKGraphRequestConnectionDelegate;

@interface FBSDKGraphRequestConnection : NSObject <NSURLSessionDataDelegate, FBSDKGraphErrorRecoveryProcessorDelegate> {
    NSString *_overrideVersionPart;
    unsigned long long _expectingResults;
    NSOperationQueue *_delegateQueue;
    FBSDKGraphRequestMetadata *_recoveringRequestMetadata;
    FBSDKGraphErrorRecoveryProcessor *_errorRecoveryProcessor;
}

@property (class, nonatomic) double defaultConnectionTimeout;

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) FBSDKURLSessionTask *task;
@property (retain, nonatomic) NSMutableArray *requests;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) FBSDKLogger *logger;
@property (nonatomic) unsigned long long requestStartTime;
@property (weak, nonatomic) id<FBSDKGraphRequestConnectionDelegate> delegate;
@property (nonatomic) double timeout;
@property (readonly, retain, nonatomic) NSHTTPURLResponse *urlResponse;
@property (retain, nonatomic) NSOperationQueue *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userAgent;

- (id)init;
- (void)dealloc;
- (void)addRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)addRequest:(id)a0 batchEntryName:(id)a1 completionHandler:(id /* block */)a2;
- (void)addRequest:(id)a0 batchParameters:(id)a1 completionHandler:(id /* block */)a2;
- (void)cancel;
- (void)overrideGraphAPIVersion:(id)a0;
- (void)start;
- (void)addRequest:(id)a0 toBatch:(id)a1 attachments:(id)a2 batchToken:(id)a3;
- (void)appendAttachments:(id)a0 toBody:(id)a1 addFormData:(BOOL)a2 logger:(id)a3;
- (void)appendJSONRequests:(id)a0 toBody:(id)a1 andNameAttachments:(id)a2 logger:(id)a3;
- (BOOL)_shouldWarnOnMissingFieldsParam:(id)a0;
- (void)_validateFieldsParamForGetRequests:(id)a0;
- (id)requestWithBatch:(id)a0 timeout:(double)a1;
- (id)urlStringForSingleRequest:(id)a0 forBatch:(BOOL)a1;
- (void)completeFBSDKURLSessionWithResponse:(id)a0 data:(id)a1 networkError:(id)a2;
- (id)parseJSONResponse:(id)a0 error:(id *)a1 statusCode:(long long)a2;
- (id)parseJSONOrOtherwise:(id)a0 error:(id *)a1;
- (void)completeWithResults:(id)a0 networkError:(id)a1;
- (void)processResultBody:(id)a0 error:(id)a1 metadata:(id)a2 canNotifyDelegate:(BOOL)a3;
- (void)processResultDebugDictionary:(id)a0;
- (id)errorFromResult:(id)a0 request:(id)a1;
- (id)errorWithCode:(long long)a0 statusCode:(long long)a1 parsedJSONResponse:(id)a2 innerError:(id)a3 message:(id)a4;
- (void)logRequest:(id)a0 bodyLength:(unsigned long long)a1 bodyLogger:(id)a2 attachmentLogger:(id)a3;
- (id)accessTokenWithRequest:(id)a0;
- (void)registerTokenToOmitFromLog:(id)a0;
- (id)defaultSession;
- (void)cleanUpSession;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)processorDidAttemptRecovery:(id)a0 didRecover:(BOOL)a1 error:(id)a2;
- (void).cxx_destruct;

@end
