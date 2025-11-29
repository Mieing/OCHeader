@class AWECodeGenListenDiversionPopupDescModel, NSArray;

@interface AWECodeGenListenDiversionPopupModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenListenDiversionPopupDescModel *descModel;
@property (copy, nonatomic) NSArray *videosModelArray;
@property (copy, nonatomic) NSArray *categoryVideosModelArray;
@property (copy, nonatomic) NSArray *oftenSeeAuthorsModelArray;
@property (nonatomic) long long popupScene;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
