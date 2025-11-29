@interface AWELifeRecordModel : NSObject

@property (nonatomic) long long currTimes;
@property (nonatomic) long long leasetTimes;
@property (nonatomic) long long leasetDuration;

- (id)initWithLeasetTimes:(long long)a0 leasetDuration:(long long)a1;
- (id)initWithLeasetTimes:(long long)a0;

@end
