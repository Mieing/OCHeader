@class NSString, HTSLiveCommon, HTSLiveGameRoomStickerSize;

@interface HTSLiveGameRoomStickerOprMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int oprType;
@property (nonatomic) int stickerType;
@property (retain, nonatomic) HTSLiveGameRoomStickerSize *stickerSize;
@property (nonatomic) BOOL hasStickerSize;
@property (copy, nonatomic) NSString *data_p;
@property (copy, nonatomic) NSString *dataDigest;
@property (copy, nonatomic) NSString *stickerURL;
@property (copy, nonatomic) NSString *recordId;
@property (copy, nonatomic) NSString *seiData;
@property (copy, nonatomic) NSString *gameId;

+ (id)descriptor;

@end
