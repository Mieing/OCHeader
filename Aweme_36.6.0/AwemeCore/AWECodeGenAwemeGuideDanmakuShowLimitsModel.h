@interface AWECodeGenAwemeGuideDanmakuShowLimitsModel : AWEBaseDataModel

@property (nonatomic) long long minDanmakuCount;
@property (nonatomic) long long minVideoDuration;
@property (nonatomic) long long showVideoInterval;
@property (nonatomic) long long scene;

+ (id)JSONKeyPathsByPropertyKey;

@end
