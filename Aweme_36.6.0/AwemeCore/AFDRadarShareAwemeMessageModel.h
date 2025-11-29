@class AFDRadarShareAwemeModel, AWEUserModel;

@interface AFDRadarShareAwemeMessageModel : AWEBaseApiModel

@property (retain, nonatomic) AWEUserModel *sharer;
@property (retain, nonatomic) AFDRadarShareAwemeModel *shareModel;

+ (id)shareModelJSONTransformer;
+ (id)sharerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
