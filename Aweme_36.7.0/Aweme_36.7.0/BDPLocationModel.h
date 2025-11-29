@class NSString;

@interface BDPLocationModel : NSObject <NSCopying, NSCoding>

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) long long scale;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *address;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
