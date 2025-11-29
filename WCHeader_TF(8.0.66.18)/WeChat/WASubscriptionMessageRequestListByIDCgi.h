@class NSArray, NSString;

@interface WASubscriptionMessageRequestListByIDCgi : WCBaseCgi

@property (retain, nonatomic) NSArray *templateArray;
@property (copy, nonatomic) NSString *subscriptionUrl;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *appid;
@property (nonatomic) unsigned int appType;
@property (nonatomic) unsigned int popupScene;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *extInfo;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithTemplateArray:(id)a0 username:(id)a1 scene:(unsigned long long)a2 appid:(id)a3 appType:(unsigned int)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (id)initWithSubscriptionUrl:(id)a0 username:(id)a1 scene:(unsigned long long)a2 popupScene:(unsigned int)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (id)initWithTemplateArray:(id)a0 username:(id)a1 scene:(unsigned long long)a2 appid:(id)a3 popupScene:(unsigned int)a4 sessionId:(id)a5 extInfo:(id)a6 successBlock:(id /* block */)a7 failBlock:(id /* block */)a8;
- (void)createRequest;
- (id)generateItemListWith:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
