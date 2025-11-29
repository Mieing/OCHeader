@class NSString;

@interface UpdateSingleTimeLimitPkConfigReq : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *pkUid;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *pkGiftIds;
@property (copy, nonatomic) NSString *pkThemeEnums;
@property (nonatomic) long long memberPkRound;
@property (nonatomic) BOOL needManualClosePk;

+ (id)descriptor;

@end
