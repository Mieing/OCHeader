@class NSMutableArray;

@interface RoundStopResponse_Data_RankListData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *rankListArray;
@property (readonly, nonatomic) unsigned long long rankListArray_Count;

+ (id)descriptor;

@end
