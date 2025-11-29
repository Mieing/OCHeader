@class NSMutableArray;

@interface GetSelectedVideoListResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *videoListArray;
@property (readonly, nonatomic) unsigned long long videoListArray_Count;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSMutableArray *topVideoListArray;
@property (readonly, nonatomic) unsigned long long topVideoListArray_Count;

+ (id)descriptor;

@end
