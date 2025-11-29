@class GameRoomStickerSize, NSString;

@interface StickerData : IESLivePBBaseMessage

@property (nonatomic) int stickerType;
@property (retain, nonatomic) GameRoomStickerSize *stickerSize;
@property (nonatomic) BOOL hasStickerSize;
@property (copy, nonatomic) NSString *stickerData;
@property (copy, nonatomic) NSString *stickerDataDigest;
@property (copy, nonatomic) NSString *stickerURL;
@property (copy, nonatomic) NSString *recordId;
@property (copy, nonatomic) NSString *gameId;

+ (id)descriptor;

@end
