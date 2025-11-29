@class NSError, NSString;

@interface WCMomentsAIImageCancelCGI : WCBaseCgi

@property (retain, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) id /* block */ successHandler;
@property (copy, nonatomic) id /* block */ failureHandler;

- (id)initWithTaskID:(id)a0;
- (void)_initRequest;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
