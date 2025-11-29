@class NSMutableArray;

@interface FansclubMeResult_CheckInNodeGuidance_UserCheckInInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL hasCheckedIn;
@property (retain, nonatomic) NSMutableArray *buttonArray;
@property (readonly, nonatomic) unsigned long long buttonArray_Count;

+ (id)descriptor;

@end
