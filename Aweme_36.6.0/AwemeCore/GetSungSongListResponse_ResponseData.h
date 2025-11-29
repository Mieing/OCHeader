@class NSMutableArray;

@interface GetSungSongListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *listInfoArray;
@property (readonly, nonatomic) unsigned long long listInfoArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long sungSongCount;

+ (id)descriptor;

@end
