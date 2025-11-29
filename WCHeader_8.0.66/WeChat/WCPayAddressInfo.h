@class NSString;

@interface WCPayAddressInfo : NSObject

@property (retain) NSString *address_name;
@property (retain) NSString *phone_num;
@property (retain) NSString *address;

+ (id)GenFromDictionary:(id)a0;

- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
