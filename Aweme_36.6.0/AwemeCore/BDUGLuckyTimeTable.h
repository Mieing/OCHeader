@interface BDUGLuckyTimeTable : BDUGLuckyBDModel

@property (nonatomic) double activityStartTimeMs;
@property (nonatomic) double activityEndTimeMs;

+ (id)modelCustomPropertyMapper;

@end
