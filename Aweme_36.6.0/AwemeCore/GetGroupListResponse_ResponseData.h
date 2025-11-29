@class NSMutableArray;

@interface GetGroupListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *groupInfoListArray;
@property (readonly, nonatomic) unsigned long long groupInfoListArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long nextCursor;

+ (id)descriptor;

@end
