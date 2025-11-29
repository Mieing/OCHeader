@class NSString;

@interface TTAccountAttestKeyTsSign : TTAccountCommonModel <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *tsSign;
@property (copy, nonatomic) NSString *pubKey;

- (id)initWithTsSign:(id)a0 pubKey:(id)a1;
- (void).cxx_destruct;

@end
