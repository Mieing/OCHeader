@class NSString, WASubscriptionMessagePageSheetViewModel;

@interface WASubscriptionMessageRequestSubscribeCgi : WCBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) WASubscriptionMessagePageSheetViewModel *viewModel;
@property (copy, nonatomic) NSString *appid;
@property (nonatomic) unsigned int popupScene;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *extInfo;

- (id)initWithViewModel:(id)a0 username:(id)a1 scene:(unsigned long long)a2 appid:(id)a3 popupScene:(unsigned int)a4 sessionId:(id)a5 extInfo:(id)a6 successBlock:(id /* block */)a7 failBlock:(id /* block */)a8;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (id)subscribeStatusInWeapp:(id)a0;
- (id)subscribeStatusInBrand:(id)a0;
- (void).cxx_destruct;

@end
