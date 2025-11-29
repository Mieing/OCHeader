@protocol ACCMusicModelProtocol;

@interface ACCMusicRecentDetailModel : ACCBaseApiModel

@property (copy, nonatomic) id<ACCMusicModelProtocol> musicInfo;

+ (id)musicInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
