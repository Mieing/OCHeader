@class NSArray, AWEIMCodeGenConsecutiveChatRelationInfoModel, AWEIMCodeGenConsecutiveCountInfoModel;

@interface AWEIMCodeGenStreakInfoChatDataModel : AWEBaseDataModel

@property (nonatomic) long long expireTime;
@property (nonatomic) long long canRecoverDays;
@property (copy, nonatomic) NSArray *flameInfosModelArray;
@property (nonatomic) BOOL disableConsecutiveChat;
@property (retain, nonatomic) AWEIMCodeGenConsecutiveCountInfoModel *consecutiveCountInfoModel;
@property (retain, nonatomic) AWEIMCodeGenConsecutiveChatRelationInfoModel *consecutiveRelationInfoModel;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (id)flameInfoModelAtCurrentTime;
- (id)flameInfoModelAtTimestamp:(double)a0;
- (id)initWithFlameInfosModelArray:(id)a0;
- (long long)maxEndTime;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
