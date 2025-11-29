@class NSNumber;

@interface AWEShareSchemaEpisodeExtraModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *episodeRecordType;
@property (retain, nonatomic) NSNumber *episodeStage;
@property (retain, nonatomic) NSNumber *episodeSubType;
@property (retain, nonatomic) NSNumber *episodeType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
