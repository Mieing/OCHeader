@class NSString;

@interface WCFinderLiveElectronicCommerceRoomConfigCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) long long scene;
@property (nonatomic) int reqScene;
@property (retain, nonatomic) NSString *anchorFinderUsrName;

- (id)initWithLiveTaskId:(id)a0 scene:(long long)a1 anchorFinderUserName:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (id)initWithReqScene:(unsigned int)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
