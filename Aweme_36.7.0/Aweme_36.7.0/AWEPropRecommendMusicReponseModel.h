@class NSArray, NSString;

@interface AWEPropRecommendMusicReponseModel : ACCBaseApiModel

@property (copy, nonatomic) NSArray *recommendMusicList;
@property (copy, nonatomic) NSString *bubbleTitle;

+ (id)recommendMusicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
