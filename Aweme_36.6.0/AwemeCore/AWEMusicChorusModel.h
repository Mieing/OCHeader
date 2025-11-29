@interface AWEMusicChorusModel : AWEBaseApiModel

@property (nonatomic) long long startTime;
@property (nonatomic) long long duration;

+ (id)JSONKeyPathsByPropertyKey;

@end
