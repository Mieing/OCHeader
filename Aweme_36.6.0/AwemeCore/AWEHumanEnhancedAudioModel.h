@class NSNumber, AWEURLModel;

@interface AWEHumanEnhancedAudioModel : AWEBaseApiModel

@property (readonly, nonatomic) AWEURLModel *mainURL;
@property (nonatomic) double loudless;
@property (nonatomic) double peak;
@property (retain, nonatomic) NSNumber *bitRate;

+ (id)mainURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
