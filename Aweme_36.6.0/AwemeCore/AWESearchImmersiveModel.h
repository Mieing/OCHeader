@class AWEDynamicPatchModel, NSString, NSArray, AWEAwemeModel, NSDictionary, AWESearchAdPopConfigModel, AWESearchImmersiveMediaVideoTimeModel;

@interface AWESearchImmersiveModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long headerContentType;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) double ratio;
@property (copy, nonatomic) NSString *businessType;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSArray *imageList;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSDictionary *adEggDictionary;
@property (retain, nonatomic) AWESearchAdPopConfigModel *adEgg;
@property (retain, nonatomic) AWESearchImmersiveMediaVideoTimeModel *mediaVideoTimeModel;
@property (retain, nonatomic) AWEDynamicPatchModel *dynamicPatch;

+ (id)awemeModelJSONTransformer;
+ (id)dynamicPatchJSONTransformer;
+ (id)adEggJSONTransformer;
+ (id)mediaVideoTimeModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
