@class VideoSticker;

@interface GetRoomClipStickerResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) VideoSticker *roomClipSticker;
@property (nonatomic) BOOL hasRoomClipSticker;

+ (id)descriptor;

@end
