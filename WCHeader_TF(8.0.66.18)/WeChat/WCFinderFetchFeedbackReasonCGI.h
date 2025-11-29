@class NSString;

@interface WCFinderFetchFeedbackReasonCGI : WCFinderBaseCgi

@property (nonatomic) unsigned long long feedID;
@property (nonatomic) long long liveScene;
@property (nonatomic) unsigned long long feedbackType;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFeedID:(unsigned long long)a0 liveScene:(long long)a1 feedbackType:(unsigned long long)a2 commentScene:(int)a3 sessionBuffer:(id)a4 success:(id /* block */)a5 fail:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
