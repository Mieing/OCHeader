@class GetGameRoomStickerResponse_Data;

@interface GetGameRoomStickerResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetGameRoomStickerResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
