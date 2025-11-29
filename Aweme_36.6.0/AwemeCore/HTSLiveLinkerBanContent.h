@class NSMutableArray;

@interface HTSLiveLinkerBanContent : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *banUsersArray;
@property (readonly, nonatomic) unsigned long long banUsersArray_Count;
@property (nonatomic) int linkmicBanType;

+ (id)descriptor;

@end
