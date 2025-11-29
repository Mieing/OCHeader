@interface WCRecommendInfo : NSObject <NSCoding>

@property (nonatomic) int recommendType;
@property (nonatomic) int source;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
