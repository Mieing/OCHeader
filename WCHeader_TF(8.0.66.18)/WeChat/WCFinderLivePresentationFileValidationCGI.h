@class NSString, MMFinderLiveTaskId;

@interface WCFinderLivePresentationFileValidationCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long finderId;
@property (copy, nonatomic) NSString *finderNonceId;
@property (nonatomic) unsigned int fileType;
@property (copy, nonatomic) NSString *fileMD5;
@property (copy, nonatomic) NSString *fileCDNURL;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithTaskId:(id)a0 finderUsername:(id)a1 liveId:(unsigned long long)a2 finderId:(unsigned long long)a3 finderNonceId:(id)a4 fileType:(unsigned int)a5 fileMD5:(id)a6 fileCDNURL:(id)a7 successBlock:(id /* block */)a8 failureBlock:(id /* block */)a9;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
