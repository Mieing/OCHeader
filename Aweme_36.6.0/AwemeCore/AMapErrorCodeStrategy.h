@class NSNumber, NSDate;

@interface AMapErrorCodeStrategy : NSObject

@property (retain, nonatomic) NSDate *beginDate;
@property (nonatomic) long long minSecond;
@property (nonatomic) long long maxSecond;
@property (readonly, nonatomic) NSNumber *duration;
@property (retain, nonatomic) id userInfo;

- (BOOL)isVaild;
- (BOOL)isHitStrateg;
- (void).cxx_destruct;
- (id)initWithDuration:(id)a0;

@end
