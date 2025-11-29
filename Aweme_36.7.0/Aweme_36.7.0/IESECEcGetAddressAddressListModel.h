@class NSDictionary, NSNumber, NSString;

@interface IESECEcGetAddressAddressListModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *address;
@property (copy, nonatomic) NSDictionary *latestAddress;
@property (retain, nonatomic) NSNumber *addressType;
@property (nonatomic) BOOL isMainPage;
@property (copy, nonatomic) NSString *bizCode;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
