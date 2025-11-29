@interface AWELiveVSEpisodeMod : AWEBaseApiModel

@property (nonatomic) long long episodeStage;
@property (nonatomic) long long episodeRecordType;
@property (nonatomic) long long episodeType;
@property (nonatomic) long long episodeSubType;

+ (id)JSONKeyPathsByPropertyKey;

@end
