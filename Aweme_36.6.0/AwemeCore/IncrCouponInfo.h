@interface IncrCouponInfo : IESLivePBBaseMessage

@property (nonatomic) long long value;
@property (nonatomic) long long threshold;
@property (nonatomic) long long taskTime;

+ (id)descriptor;

@end
