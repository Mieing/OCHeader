@class NSString, NSSet;

@interface AWEIMMangoGroupIncentiveSettingConfig : NSObject

@property (nonatomic) double mangoChallengeStartTime;
@property (nonatomic) double mangoChallengeEndTime;
@property (copy, nonatomic) NSString *noticeContentText;
@property (copy, nonatomic) NSString *noticeActionText;
@property (copy, nonatomic) NSSet *mangoExtGroupOnSet;
@property (nonatomic) BOOL noticeEnable;
@property (nonatomic) BOOL canShowGroupIncentiveEstablishedAnimation;
@property (nonatomic) BOOL enableShowF2FMainPartReward;

+ (id)getAWEIMMangoGroupIncentiveSettingConfig;
+ (BOOL)isInSevenDaysChallengeTime;

- (void).cxx_destruct;

@end
