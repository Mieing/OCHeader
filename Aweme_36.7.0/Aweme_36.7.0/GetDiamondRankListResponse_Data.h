@class NSMutableArray;

@interface GetDiamondRankListResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *rankListArray;
@property (readonly, nonatomic) unsigned long long rankListArray_Count;

+ (id)descriptor;

@end
