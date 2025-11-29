@class NSString, NSArray, NSDictionary, NSNumber;

@interface IESECLiveGoodsGetRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSString *pIDs;
@property (copy, nonatomic) NSArray *productInfos;
@property (copy, nonatomic) NSString *entranceInfo;
@property (copy, nonatomic) NSString *apiPath;
@property (nonatomic) long long requestType;
@property (retain, nonatomic) NSString *requestAdditions;
@property (copy, nonatomic) NSNumber *livePanelHeightPercent;
@property (copy, nonatomic) NSDictionary *extraRequestParams;
@property (retain, nonatomic) NSString *containerRoomID;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *addressInfo;
@property (retain, nonatomic) NSString *headerCallBack;

- (id)buildParams;
- (void).cxx_destruct;
- (id)init;

@end
