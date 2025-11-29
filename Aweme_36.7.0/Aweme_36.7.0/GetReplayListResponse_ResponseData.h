@class NSMutableArray;

@interface GetReplayListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *allReplayArray;
@property (readonly, nonatomic) unsigned long long allReplayArray_Count;
@property (nonatomic) BOOL switchRoom;

+ (id)descriptor;

@end
