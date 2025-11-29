@class NSString;

@interface HTSLiveFreqCtrlParams : IESLivePBBaseMessage

@property (nonatomic) long long ieslive_expiredTime;
@property (nonatomic) int strategy;
@property (nonatomic) long long limit;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long cur;
@property (nonatomic) long long duration;

+ (id)descriptor;

@end
