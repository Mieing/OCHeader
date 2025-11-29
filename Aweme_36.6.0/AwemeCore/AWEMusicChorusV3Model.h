@interface AWEMusicChorusV3Model : AWEBaseApiModel

@property (nonatomic) long long startTime;
@property (nonatomic) long long duration;
@property (nonatomic) double startTimeProb;
@property (nonatomic) double endTimeProb;
@property (nonatomic) double chrousProb;

+ (id)JSONKeyPathsByPropertyKey;

@end
