@class NSMutableArray;

@interface GetRealTimeChorusRoomListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *roomsArray;
@property (readonly, nonatomic) unsigned long long roomsArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long offset;

+ (id)descriptor;

@end
