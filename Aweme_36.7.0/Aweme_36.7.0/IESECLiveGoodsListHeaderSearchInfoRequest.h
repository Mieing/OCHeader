@class NSString, NSNumber;

@interface IESECLiveGoodsListHeaderSearchInfoRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSString *entranceInfo;
@property (copy, nonatomic) NSNumber *livePanelHeightPercent;
@property (copy, nonatomic) NSString *relatedSearchHint;

- (id)buildParams;
- (void).cxx_destruct;

@end
