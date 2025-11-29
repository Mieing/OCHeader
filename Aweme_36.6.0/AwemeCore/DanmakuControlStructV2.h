@class NSString, NSMutableArray, DanmakuPostGuideStructV2;

@interface DanmakuControlStructV2 : GPBMessage

@property (nonatomic) BOOL enableDanmaku;
@property (nonatomic) BOOL hasEnableDanmaku;
@property (nonatomic) int postPrivilegeLevel;
@property (nonatomic) BOOL hasPostPrivilegeLevel;
@property (nonatomic) BOOL isPostDenied;
@property (nonatomic) BOOL hasIsPostDenied;
@property (copy, nonatomic) NSString *postDeniedReason;
@property (nonatomic) BOOL hasPostDeniedReason;
@property (nonatomic) int bonusSceneId;
@property (nonatomic) BOOL hasBonusSceneId;
@property (nonatomic) int pendantId;
@property (nonatomic) BOOL hasPendantId;
@property (nonatomic) BOOL skipDanmaku;
@property (nonatomic) BOOL hasSkipDanmaku;
@property (nonatomic) long long danmakuCnt;
@property (nonatomic) BOOL hasDanmakuCnt;
@property (retain, nonatomic) NSMutableArray *activitiesArray;
@property (readonly, nonatomic) unsigned long long activitiesArray_Count;
@property (copy, nonatomic) NSString *passThroughParams;
@property (nonatomic) BOOL hasPassThroughParams;
@property (nonatomic) int smartModeDecision;
@property (nonatomic) BOOL hasSmartModeDecision;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) BOOL hasPlaceholder;
@property (retain, nonatomic) DanmakuPostGuideStructV2 *postGuide;
@property (nonatomic) BOOL hasPostGuide;
@property (nonatomic) long long firstDanmakuOffset;
@property (nonatomic) BOOL hasFirstDanmakuOffset;
@property (nonatomic) long long lastDanmakuOffset;
@property (nonatomic) BOOL hasLastDanmakuOffset;

+ (id)descriptor;

- (long long)lastDanmakuOffset;
- (long long)firstDanmakuOffset;
- (int)smartModeDecision;
- (id)passThroughParams;
- (id)activitiesArray;
- (long long)danmakuCnt;
- (BOOL)skipDanmaku;
- (id)postDeniedReason;
- (BOOL)isPostDenied;
- (int)postPrivilegeLevel;
- (BOOL)enableDanmaku;

@end
