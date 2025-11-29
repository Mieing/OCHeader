@interface TBRoadEventCity : NSObject <NSCoding>

@property (nonatomic) int cityId;
@property (nonatomic) int version;
@property (nonatomic) double time;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;

@end
