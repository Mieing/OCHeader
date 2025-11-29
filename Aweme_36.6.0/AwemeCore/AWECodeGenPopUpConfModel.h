@class NSString;

@interface AWECodeGenPopUpConfModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *popUpSchema;
@property (nonatomic) long long curSceneNextCanApplyTimestampt;
@property (nonatomic) int isHitSpringFestival;
@property (nonatomic) long long popUpType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
