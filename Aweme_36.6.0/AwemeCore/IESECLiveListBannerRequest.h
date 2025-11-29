@class NSNumber, NSString;

@interface IESECLiveListBannerRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSNumber *everClosedOrder;
@property (copy, nonatomic) NSString *entranceInfo;
@property (copy, nonatomic) NSNumber *livePanelHeightPercent;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *addressInfo;

- (id)buildParams;
- (void).cxx_destruct;

@end
