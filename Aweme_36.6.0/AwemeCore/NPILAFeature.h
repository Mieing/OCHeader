@class NSDictionary;

@interface NPILAFeature : NSObject

@property (nonatomic) BOOL fromCache;
@property (nonatomic) long long costTime;
@property (copy, nonatomic) NSDictionary *clip128Dic;
@property (copy, nonatomic) NSDictionary *c300TagsInfo;
@property (copy, nonatomic) NSDictionary *faceInfo;
@property (copy, nonatomic) NSDictionary *clip12830MDic;
@property (copy, nonatomic) NSDictionary *scoreInfo;
@property (copy, nonatomic) NSDictionary *c300ExtTagsInfo;
@property (copy, nonatomic) NSDictionary *c1500TagsInfo;

+ (id)featureInfoFrom:(id)a0 featureTypes:(id)a1 timeStamps:(id)a2;
+ (id)featureInfoFrom:(id)a0 featureTypes:(id)a1;
+ (id)featureInfoSerializationDicFrom:(id)a0;
+ (id)defaultTimeStampsForILAFeatureWithDurationMS:(long long)a0;
+ (id)convertToILATypesWithFeatures:(id)a0;
+ (id)convertToNPTypesWithILAFeatures:(id)a0;

- (id)initWithClip128Dic:(id)a0 c300Dic:(id)a1 faceInfo:(id)a2 clip12830MDic:(id)a3 scoreInfo:(id)a4 c300ExtDic:(id)a5 c1500Dic:(id)a6;
- (id)initWithILAResults:(id)a0 ilaFeatures:(id)a1;
- (id)initWithClip128Dic:(id)a0 c300Dic:(id)a1 faceInfo:(id)a2 clip12830MDic:(id)a3;
- (id)mutableCopyWithFeatureFiltered:(id)a0 timeStamps:(id)a1;
- (void).cxx_destruct;

@end
