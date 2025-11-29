@class NSMutableArray;

@interface GetKTVColdStartingSongListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *songsArray;
@property (readonly, nonatomic) unsigned long long songsArray_Count;

+ (id)descriptor;

@end
