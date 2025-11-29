@class GetRoomClipStickerResponse_Data;

@interface GetRoomClipStickerResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetRoomClipStickerResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
