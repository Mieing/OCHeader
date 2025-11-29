@class NSString;

@interface IESECLiveGoodsBargainRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSString *apiPath;
@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *addressInfo;

@end
