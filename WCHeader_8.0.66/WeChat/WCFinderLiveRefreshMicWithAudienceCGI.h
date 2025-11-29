@class WCFinderDataItem, NSString, NSData;

@interface WCFinderLiveRefreshMicWithAudienceCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (copy, nonatomic) NSString *sdkUserId;
@property (retain, nonatomic) NSData *liveCookies;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 liveCookies:(id)a2 sdkUserId:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
