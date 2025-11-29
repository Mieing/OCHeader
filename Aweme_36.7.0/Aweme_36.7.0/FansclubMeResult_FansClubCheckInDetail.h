@class NSString, NSMutableArray;

@interface FansclubMeResult_FansClubCheckInDetail : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *mileStoneListArray;
@property (readonly, nonatomic) unsigned long long mileStoneListArray_Count;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;

+ (id)descriptor;

@end
