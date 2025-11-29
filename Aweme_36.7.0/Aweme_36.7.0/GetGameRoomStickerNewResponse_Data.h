@class NSMutableArray;

@interface GetGameRoomStickerNewResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *dataListArray;
@property (readonly, nonatomic) unsigned long long dataListArray_Count;

+ (id)descriptor;

@end
