@class NSMutableArray;

@interface GetAllSortedFansGroupResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *conCoreInfosArray;
@property (readonly, nonatomic) unsigned long long conCoreInfosArray_Count;

+ (id)descriptor;

@end
