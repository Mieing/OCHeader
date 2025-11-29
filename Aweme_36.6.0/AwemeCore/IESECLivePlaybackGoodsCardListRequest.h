@class NSString, NSNumber;

@interface IESECLivePlaybackGoodsCardListRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSString *entranceInfoJSONString;
@property (copy, nonatomic) NSNumber *page;
@property (copy, nonatomic) NSNumber *pageSize;
@property (copy, nonatomic) NSString *needPageTimestamp;

- (id)buildParams;
- (void).cxx_destruct;

@end
