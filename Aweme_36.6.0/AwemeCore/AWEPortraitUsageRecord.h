@interface AWEPortraitUsageRecord : NSObject <NSCoding>

@property (nonatomic) long long usage;
@property (nonatomic) BOOL not_found;

+ (id)recordWithUsage:(long long)a0;

- (id)toJSONDict;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
