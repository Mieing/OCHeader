@class GetGameRoomStickerNewResponse_Data;

@interface GetGameRoomStickerNewResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetGameRoomStickerNewResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
