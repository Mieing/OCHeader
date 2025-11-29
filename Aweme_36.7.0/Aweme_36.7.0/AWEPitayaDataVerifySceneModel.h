@class NSString, NSArray;

@interface AWEPitayaDataVerifySceneModel : AWEBaseBizConfigModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *conditionArray;
@property (copy, nonatomic) NSArray *disableArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
