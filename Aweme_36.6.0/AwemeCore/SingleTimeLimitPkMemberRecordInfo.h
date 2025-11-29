@class NSMutableArray, HTSLiveUser;

@interface SingleTimeLimitPkMemberRecordInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) long long totalIncome;
@property (nonatomic) long long maxWinSession;
@property (retain, nonatomic) NSMutableArray *pkRecordsArray;
@property (readonly, nonatomic) unsigned long long pkRecordsArray_Count;

+ (id)descriptor;

@end
