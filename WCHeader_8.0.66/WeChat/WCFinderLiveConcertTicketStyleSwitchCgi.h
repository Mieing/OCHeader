@class NSString;

@interface WCFinderLiveConcertTicketStyleSwitchCgi : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) NSString *resourceId;
@property (retain, nonatomic) NSString *audienceFinderUsername;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithActivityId:(id)a0 resourceId:(id)a1 audienceFinderUsername:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
