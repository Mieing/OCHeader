@class NSString, NSNumber, NSArray;

@interface AWEDanmakuExtraModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *logoURL;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSNumber *pendantID;
@property (retain, nonatomic) NSNumber *materialID;
@property (copy, nonatomic) NSString *searchSchema;
@property (copy, nonatomic) NSArray *danmakuStyleList;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
