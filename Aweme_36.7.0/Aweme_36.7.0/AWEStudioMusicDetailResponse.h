@protocol AWEStudioMusicModelProtocol;

@interface AWEStudioMusicDetailResponse : ACCBaseApiModel

@property (retain, nonatomic) id<AWEStudioMusicModelProtocol> musicInfo;

+ (id)musicInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
