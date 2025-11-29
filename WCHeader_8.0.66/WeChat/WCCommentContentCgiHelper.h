@class NSMutableArray;

@interface WCCommentContentCgiHelper : WCBaseCgi

@property (retain, nonatomic) NSMutableArray *contentReqs;
@property (nonatomic) unsigned int startTime;
@property (copy, nonatomic) id /* block */ successHandler;
@property (copy, nonatomic) id /* block */ failureHandler;

- (id)initWithUserComments:(id)a0 successHandler:(id /* block */)a1 failureHandler:(id /* block */)a2;
- (void)dealloc;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
