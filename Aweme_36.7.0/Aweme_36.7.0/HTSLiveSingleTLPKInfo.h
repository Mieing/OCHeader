@class NSString, NSMutableArray, HTSLiveUser;

@interface HTSLiveSingleTLPKInfo : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (nonatomic) int pkStatus;
@property (nonatomic) int pkResult;
@property (retain, nonatomic) HTSLiveUser *pkUser;
@property (nonatomic) BOOL hasPkUser;
@property (nonatomic) long long duration;
@property (retain, nonatomic) NSMutableArray *pkThemeInfoArray;
@property (readonly, nonatomic) unsigned long long pkThemeInfoArray_Count;
@property (nonatomic) long long startTime;
@property (nonatomic) long long sendGiftUserNumber;
@property (nonatomic) long long pkRound;
@property (nonatomic) long long maxWinRound;
@property (nonatomic) long long curWinRound;
@property (nonatomic) long long calculateTime;
@property (copy, nonatomic) NSString *playModId;
@property (retain, nonatomic) NSMutableArray *allMemberPkInfosArray;
@property (readonly, nonatomic) unsigned long long allMemberPkInfosArray_Count;

+ (id)descriptor;

@end
