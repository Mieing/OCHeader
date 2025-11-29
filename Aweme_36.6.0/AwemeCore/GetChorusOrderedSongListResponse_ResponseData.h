@class NSMutableArray;

@interface GetChorusOrderedSongListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *listInfoArray;
@property (readonly, nonatomic) unsigned long long listInfoArray_Count;

+ (id)descriptor;

@end
