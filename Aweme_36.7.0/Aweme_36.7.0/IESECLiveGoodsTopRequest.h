@class NSString, NSNumber, NSDictionary;

@interface IESECLiveGoodsTopRequest : IESECLiveAPIBaseRequest

@property (retain, nonatomic) NSString *containerRoomID;
@property (copy, nonatomic) NSString *entranceInfo;
@property (copy, nonatomic) NSNumber *livePanelHeightPercent;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *addressInfo;
@property (retain, nonatomic) NSString *headerCallBack;
@property (copy, nonatomic) NSDictionary *extraRequestParams;
@property (nonatomic) BOOL usePromotionV2;

- (id)buildParams;
- (void).cxx_destruct;

@end
