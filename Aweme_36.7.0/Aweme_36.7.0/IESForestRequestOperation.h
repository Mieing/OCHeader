@class NSData, NSError, NSString, NSURLResponse, IESForestRequestOperationManager, NSURLRequest, BDXThreadSafeArray, IESForestResponse;
@protocol IESForestWorkflow;

@interface IESForestRequestOperation : NSObject <IESForestRequestOperation>

@property (weak, nonatomic) IESForestRequestOperationManager *operationManager;
@property (retain, nonatomic) BDXThreadSafeArray *completions;
@property (retain, nonatomic) IESForestResponse *response;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) BDXThreadSafeArray *redirectHandlers;
@property (retain, nonatomic) BDXThreadSafeArray *headerHandlers;
@property (retain, nonatomic) BDXThreadSafeArray *dataHandlers;
@property (retain, nonatomic) BDXThreadSafeArray *completionHandlers;
@property (retain, nonatomic) NSURLRequest *redirectNewRequest;
@property (retain, nonatomic) NSURLResponse *redirectOldResponse;
@property (retain, nonatomic) NSURLResponse *responseHeader;
@property (retain, nonatomic) NSData *receivedData;
@property (retain, nonatomic) IESForestResponse *streamResponse;
@property (retain, nonatomic) NSError *streamError;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) id<IESForestWorkflow> workflow;
@property (nonatomic) BOOL isReused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createNonStreamWorkFlow:(id)a0 forestKit:(id)a1;
- (id)createStreamWorkFlow:(id)a0 forestKit:(id)a1;
- (void)invokeNonStreamCompletions:(id)a0 error:(id)a1;
- (void)invokeStreamCompletions:(id)a0 error:(id)a1;
- (void)invokeHeaderHandler:(id)a0;
- (void)invokeDataHandler:(id)a0 data:(id)a1;
- (void)invokeCompletionHandler:(id)a0 error:(id)a1;
- (void)invokeRedirectHandler:(id)a0 oldResponse:(id)a1;
- (void)appendRedirectHandler:(id /* block */)a0;
- (void)appendHeaderHandler:(id /* block */)a0;
- (void)appendDataHandler:(id /* block */)a0;
- (id)initWithRequest:(id)a0 forestKit:(id)a1 isStream:(BOOL)a2 operationManager:(id)a3;
- (void)appendCompletion:(id /* block */)a0;
- (void)appendRedirectHandler:(id /* block */)a0 headerHandler:(id /* block */)a1 dataHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)request;
- (void)start;
- (BOOL)cancel;
- (void)appendCompletionHandler:(id /* block */)a0;

@end
