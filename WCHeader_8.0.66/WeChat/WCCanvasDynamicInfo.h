@class NSString;

@interface WCCanvasDynamicInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *keypath;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
