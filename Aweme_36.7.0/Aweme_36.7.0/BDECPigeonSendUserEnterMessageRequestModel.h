@class NSString, NSDictionary;

@interface BDECPigeonSendUserEnterMessageRequestModel : NSObject

@property (copy, nonatomic) NSString *pigeonShopId;
@property (copy, nonatomic) NSString *conGroupId;
@property (copy, nonatomic) NSString *cardUrlContextParams;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (copy, nonatomic) NSDictionary *extParams;
@property (copy, nonatomic) NSString *bizServiceEntityID;
@property (copy, nonatomic) NSString *pigeonServiceEntityID;
@property (copy, nonatomic) NSString *storeID;

- (void).cxx_destruct;

@end
