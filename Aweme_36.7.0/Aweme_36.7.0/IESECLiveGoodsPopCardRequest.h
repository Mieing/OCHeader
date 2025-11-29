@class NSString, NSNumber, NSDictionary;

@interface IESECLiveGoodsPopCardRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSString *baseURLString;
@property (copy, nonatomic) NSString *apiPath;
@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *entranceInfo;
@property (copy, nonatomic) NSNumber *sceneID;
@property (nonatomic) BOOL isRetryRequest;
@property (copy, nonatomic) NSString *popProductInfo;
@property (copy, nonatomic) NSString *containerRoomID;
@property (copy, nonatomic) NSString *containerAuthorID;
@property (copy, nonatomic) NSDictionary *extraRequestParams;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *addressInfo;
@property (retain, nonatomic) NSString *useCardV2;
@property (copy, nonatomic) NSString *relatedInfo;
@property (nonatomic) long long popType;

- (id)buildParams;
- (void).cxx_destruct;
- (id)init;

@end
