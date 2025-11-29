@class NSError, NSString, NSArray;

@interface WCMomentsAIImageGenerateCGI : WCBaseCgi

@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) unsigned int nextQueryInterval;
@property (nonatomic) unsigned int maxRetryTimes;
@property (readonly, copy, nonatomic) NSString *clientID;
@property (readonly, copy, nonatomic) NSArray *originalURLs;
@property (copy, nonatomic) id /* block */ successHandler;
@property (copy, nonatomic) id /* block */ failureHandler;

- (id)initWithClientID:(id)a0 originalURLs:(id)a1;
- (void)_initRequest;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
