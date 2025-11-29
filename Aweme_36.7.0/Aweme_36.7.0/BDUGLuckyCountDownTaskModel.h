@class NSString;

@interface BDUGLuckyCountDownTaskModel : BDUGLuckyJSONModel

@property (nonatomic) long long progress;
@property (nonatomic) long long needPendant;
@property (nonatomic) long long persistentType;
@property (nonatomic) long long reportInterval;
@property (nonatomic) long long totalReportCount;
@property (nonatomic) long long remainingReportCount;
@property (copy, nonatomic) NSString *pendantKey;
@property (nonatomic) double expireTime;
@property (copy, nonatomic) NSString *scenes;
@property (copy, nonatomic) NSString *pendantType;

- (void).cxx_destruct;

@end
