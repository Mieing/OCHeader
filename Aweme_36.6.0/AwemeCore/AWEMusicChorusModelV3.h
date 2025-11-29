@interface AWEMusicChorusModelV3 : AWEBaseDataModel

@property (nonatomic) long long startMs;
@property (nonatomic) long long durationMs;
@property (nonatomic) double startProb;
@property (nonatomic) double endProb;
@property (nonatomic) double chorusProb;

+ (id)JSONKeyPathsByPropertyKey;

@end
