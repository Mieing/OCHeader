@class GameRoomStickerSize, NSString;

@interface GetGameRoomStickerResponse_Data : IESLivePBBaseMessage

@property (nonatomic) int stickerType;
@property (retain, nonatomic) GameRoomStickerSize *stickerSize;
@property (nonatomic) BOOL hasStickerSize;
@property (copy, nonatomic) NSString *stickerData;
@property (copy, nonatomic) NSString *stickerDataDigest;
@property (copy, nonatomic) NSString *stickerURL;

+ (id)descriptor;

@end
