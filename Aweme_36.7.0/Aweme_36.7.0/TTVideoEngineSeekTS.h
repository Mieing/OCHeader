@interface TTVideoEngineSeekTS : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double opening_ver2;
@property (nonatomic) double ending_ver2;
@property (nonatomic) long long apiVer;
@property (nonatomic) double opening;
@property (nonatomic) double ending;

- (double)getValueFloat:(long long)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
