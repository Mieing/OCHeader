@class NSString;

@interface WCAdvertiseDynamicKeyInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *keyPath;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
