@class NSDate;

@interface AWEIMDefaultLandingColdLaunchStrategy : NSObject <NSCoding>

@property (nonatomic) int hasColdLaunchCount;
@property (nonatomic) int enableColdLaunchIndex;
@property (retain, nonatomic) NSDate *hasColdLaunchDate;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
