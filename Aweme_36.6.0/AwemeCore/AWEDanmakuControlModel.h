@class NSString, NSArray, NSNumber, AWECodeGenDanmakuPostGuideModel;

@interface AWEDanmakuControlModel : AWEBaseApiModel

@property (nonatomic) BOOL enableDanmaku;
@property (copy, nonatomic) NSString *postDeniedReason;
@property (nonatomic) long long postPrivilegeLevel;
@property (nonatomic) BOOL isPostDenied;
@property (retain, nonatomic) NSNumber *bonusSceneId;
@property (retain, nonatomic) NSNumber *pendantId;
@property (retain, nonatomic) NSNumber *danmakuCount;
@property (nonatomic) BOOL skipDanmakuRequest;
@property (retain, nonatomic) NSArray *danmakuActivities;
@property (copy, nonatomic) NSString *inputPlaceholder;
@property (copy, nonatomic) NSString *passThroughParams;
@property (nonatomic) long long danmakuSmartModeLevel;
@property (retain, nonatomic) AWECodeGenDanmakuPostGuideModel *danmakuPostGuide;
@property (nonatomic) long long firstDanmakuOffset;
@property (nonatomic) long long lastDanmakuOffset;

+ (id)danmakuActivitiesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)downloadResourcesModels;
- (void).cxx_destruct;

@end
