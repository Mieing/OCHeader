@class NSString, NSDictionary, NSNumber;

@interface IESECLiveGoodsListRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSString *entranceInfo;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSNumber *livePanelHeightPercent;

- (id)buildParams;
- (void).cxx_destruct;

@end
