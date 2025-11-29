@class AWECodeGenAwemeGuideDanmakuExitModel, NSString, AWECodeGenAwemeGuideDanmakuEnterModel, NSArray, AWECodeGenAwemeGuideDanmakuShowLimitsModel;

@interface AWECodeGenAwemeGuideDanmakuModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *danmakuKey;
@property (retain, nonatomic) AWECodeGenAwemeGuideDanmakuShowLimitsModel *showLimitsModel;
@property (retain, nonatomic) AWECodeGenAwemeGuideDanmakuEnterModel *enterModel;
@property (retain, nonatomic) AWECodeGenAwemeGuideDanmakuExitModel *exitModel;
@property (copy, nonatomic) NSArray *contentListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
