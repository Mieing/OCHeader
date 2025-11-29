@class NSMutableArray;

@interface SingleTimeLimitPkRecord : IESLivePBBaseMessage

@property (nonatomic) long long startTime;
@property (nonatomic) BOOL isWin;
@property (retain, nonatomic) NSMutableArray *pkThemeInfosArray;
@property (readonly, nonatomic) unsigned long long pkThemeInfosArray_Count;
@property (nonatomic) long long memberSetPkRound;
@property (nonatomic) BOOL needManualClosePk;

+ (id)descriptor;

@end
