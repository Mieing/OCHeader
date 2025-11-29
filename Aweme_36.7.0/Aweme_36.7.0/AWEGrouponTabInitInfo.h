@class NSString, NSDictionary, AWENearbyGuideModel;

@interface AWEGrouponTabInitInfo : AWEBaseApiModel

@property (retain, nonatomic) AWENearbyGuideModel *firstGuideModel;
@property (retain, nonatomic) AWENearbyGuideModel *secondGuideModel;
@property (copy, nonatomic) NSString *transParam;
@property (copy, nonatomic) NSString *guideDsl;
@property (nonatomic) long long guideTimeStamp;
@property (copy, nonatomic) NSDictionary *dualAbParam;
@property (copy, nonatomic) NSDictionary *searchBarConfig;
@property (copy, nonatomic) NSString *nearbyTransformerIcon;
@property (copy, nonatomic) NSString *nearbyPreloadResource;
@property (nonatomic) BOOL multiTabEnable;
@property (nonatomic) unsigned long long pageStyle;
@property (nonatomic) BOOL grouponTabEnable;
@property (copy, nonatomic) NSString *poiHalfScreenFilterConfig;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (void).cxx_destruct;
- (id)init;

@end
