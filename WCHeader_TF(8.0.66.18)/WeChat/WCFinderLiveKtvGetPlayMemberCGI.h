@class WCFinderDataItem, NSData;

@interface WCFinderLiveKtvGetPlayMemberCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) long long cgiRequestScene;
@property (retain, nonatomic) NSData *reqBuffer;
@property (retain, nonatomic) NSData *liveCookies;

- (id)initWithFinderTaskId:(id)a0 reqBuffer:(id)a1 liveCookies:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
