@class NSArray;

@interface WCTimelineBatchGetFeedsCGI : WCBaseCgi

@property (copy, nonatomic) NSArray *feedIds;
@property (nonatomic) unsigned int startTime;
@property (copy, nonatomic) id /* block */ successHandler;
@property (copy, nonatomic) id /* block */ failureHandler;
@property (readonly, nonatomic) int scene;

- (id)initWithScene:(int)a0 feedIds:(id)a1 successHandler:(id /* block */)a2 failureHandler:(id /* block */)a3;
- (void)dealloc;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
