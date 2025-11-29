@class NSString, UrlStructV2, PreviewConfigV2;

@interface AdChargeConfigV2 : GPBMessage

@property (nonatomic) BOOL hasPaid_p;
@property (nonatomic) BOOL hasHasPaid_p;
@property (retain, nonatomic) PreviewConfigV2 *previewConfig;
@property (nonatomic) BOOL hasPreviewConfig;
@property (nonatomic) int unlockNum;
@property (nonatomic) BOOL hasUnlockNum;
@property (nonatomic) int additionalNum;
@property (nonatomic) BOOL hasAdditionalNum;
@property (nonatomic) long long creatorId;
@property (nonatomic) BOOL hasCreatorId;
@property (nonatomic) int rit;
@property (nonatomic) BOOL hasRit;
@property (copy, nonatomic) NSString *adFrom;
@property (nonatomic) BOOL hasAdFrom;
@property (copy, nonatomic) NSString *detainmentText;
@property (nonatomic) BOOL hasDetainmentText;
@property (retain, nonatomic) UrlStructV2 *coverURL;
@property (nonatomic) BOOL hasCoverURL;
@property (copy, nonatomic) NSString *textAfterUnlock;
@property (nonatomic) BOOL hasTextAfterUnlock;
@property (nonatomic) long long timestamp;
@property (nonatomic) BOOL hasTimestamp;
@property (copy, nonatomic) NSString *certificate;
@property (nonatomic) BOOL hasCertificate;
@property (copy, nonatomic) NSString *sign;
@property (nonatomic) BOOL hasSign;
@property (copy, nonatomic) NSString *creatorIdStr;
@property (nonatomic) BOOL hasCreatorIdStr;
@property (copy, nonatomic) NSString *sendUniqId;
@property (nonatomic) BOOL hasSendUniqId;
@property (nonatomic) BOOL isDelivery;
@property (nonatomic) BOOL hasIsDelivery;
@property (copy, nonatomic) NSString *hasRightText_p;
@property (nonatomic) BOOL hasHasRightText_p;
@property (nonatomic) int strategyType;
@property (nonatomic) BOOL hasStrategyType;
@property (nonatomic) int requiredCount;
@property (nonatomic) BOOL hasRequiredCount;
@property (nonatomic) int finishedCount;
@property (nonatomic) BOOL hasFinishedCount;
@property (nonatomic) int finishedProgress;
@property (nonatomic) BOOL hasFinishedProgress;
@property (nonatomic) int afterFinishedCount;
@property (nonatomic) BOOL hasAfterFinishedCount;
@property (nonatomic) int afterFinishedProgress;
@property (nonatomic) BOOL hasAfterFinishedProgress;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasCursor;
@property (copy, nonatomic) NSString *adAwardKey;
@property (nonatomic) BOOL hasAdAwardKey;
@property (nonatomic) BOOL hasMore_p;
@property (nonatomic) BOOL hasHasMore_p;

+ (id)descriptor;

@end
