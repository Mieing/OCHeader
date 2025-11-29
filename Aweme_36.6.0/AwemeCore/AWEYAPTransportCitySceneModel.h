@class NSString, AWEYAPTransportCitySceneIconConfig, NSArray;

@interface AWEYAPTransportCitySceneModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *bizScene;
@property (copy, nonatomic) NSString *sceneName;
@property (retain, nonatomic) AWEYAPTransportCitySceneIconConfig *sceneConfig;
@property (nonatomic) BOOL recommendFlag;
@property (copy, nonatomic) NSArray *trafficCardList;

+ (id)trafficCardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
