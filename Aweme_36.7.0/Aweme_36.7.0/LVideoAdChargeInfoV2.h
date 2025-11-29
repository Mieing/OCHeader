@class LVideoAdPreviewConfigV2, NSString, NSMutableArray;

@interface LVideoAdChargeInfoV2 : GPBMessage

@property (retain, nonatomic) LVideoAdPreviewConfigV2 *previewConfig;
@property (nonatomic) BOOL hasPreviewConfig;
@property (nonatomic) long long unlockType;
@property (nonatomic) BOOL hasUnlockType;
@property (nonatomic) long long remainedCanWatchDuration;
@property (nonatomic) BOOL hasRemainedCanWatchDuration;
@property (nonatomic) long long totalAdCount;
@property (nonatomic) BOOL hasTotalAdCount;
@property (nonatomic) long long remainedAdCount;
@property (nonatomic) BOOL hasRemainedAdCount;
@property (nonatomic) long long creatorId;
@property (nonatomic) BOOL hasCreatorId;
@property (nonatomic) int rit;
@property (nonatomic) BOOL hasRit;
@property (copy, nonatomic) NSString *adFrom;
@property (nonatomic) BOOL hasAdFrom;
@property (copy, nonatomic) NSString *creatorIdStr;
@property (nonatomic) BOOL hasCreatorIdStr;
@property (retain, nonatomic) NSMutableArray *awardsArray;
@property (readonly, nonatomic) unsigned long long awardsArray_Count;

+ (id)descriptor;

@end
