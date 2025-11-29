@class NSString, NSData, WCFinderDataItem, WCFinderLiveMakePackageOrderParams;

@interface WCFinderMakePackageOrderCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) unsigned int targetLevel;
@property (nonatomic) unsigned long long orderWecoinAmount;
@property (copy, nonatomic) NSString *orderRequestId;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) WCFinderLiveMakePackageOrderParams *params;

- (id)initWithFinderTaskId:(id)a0 params:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
