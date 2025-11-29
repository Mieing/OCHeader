@class NSString;

@interface AWEHPLandingSchedulerJumpRecord : AWEBaseBizConfigModel

@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSString *tabid;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
