@class NSString, NSDictionary;

@interface BDSCManufacturerInfo : NSObject

@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *modelNumber;
@property (nonatomic) BOOL checkByVersion;
@property (copy, nonatomic) NSString *providerKey;
@property (copy, nonatomic) NSString *vendorID;
@property (copy, nonatomic) NSString *appSecret;
@property (copy, nonatomic) NSString *manufacturerDesc;
@property (nonatomic) BOOL enableToXsg;
@property (retain, nonatomic) NSDictionary *deviceExtraInfo;

- (void).cxx_destruct;

@end
