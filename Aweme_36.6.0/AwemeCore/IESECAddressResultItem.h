@class NSDictionary, NSString;

@interface IESECAddressResultItem : NSObject

@property (copy, nonatomic) NSDictionary *address;
@property (copy, nonatomic) NSDictionary *latestAddress;
@property (nonatomic) long long addressType;
@property (nonatomic) BOOL isMainPage;
@property (copy, nonatomic) NSString *bizCode;

- (void).cxx_destruct;

@end
