@interface AWEPOIPrefetchThresholdError : NSObject

@property (nonatomic) long long thresholdType;
@property (nonatomic) long long overflowTimes;
@property (nonatomic) long long limitTimes;

+ (id)error:(long long)a0 overflowCount:(long long)a1 limitTimes:(long long)a2;

@end
