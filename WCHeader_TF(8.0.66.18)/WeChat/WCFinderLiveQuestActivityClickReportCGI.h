@class NSString;

@interface WCFinderLiveQuestActivityClickReportCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSString *activityID;
@property (copy, nonatomic) id /* block */ sucessBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithQuestActivity:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
