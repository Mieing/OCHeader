@class NSString, NSMutableArray;

@interface GetMultiChorusWaitingListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *usersArray;
@property (readonly, nonatomic) unsigned long long usersArray_Count;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *nextCursor;
@property (nonatomic) long long totalCount;

+ (id)descriptor;

@end
