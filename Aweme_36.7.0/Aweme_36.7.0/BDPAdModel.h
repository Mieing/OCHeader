@class NSString;

@interface BDPAdModel : NSObject <NSCopying, NSCoding>

@property (copy, nonatomic) NSString *adid;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long status;
@property (nonatomic) long long isAllowedInLive;

+ (id)modelCustomPropertyMapper;
+ (void)bootstrapLaunch;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
