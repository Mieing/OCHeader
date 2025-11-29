@class HTSLiveRoomGameDataChannelConfig, HTSLiveSandwichBorderInfo, HTSLiveGameRoomSticker, HTSLiveGameTagInfo;

@interface HTSLiveRoomGameData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRoomGameDataChannelConfig *roomGameDataChannelConfig;
@property (nonatomic) BOOL hasRoomGameDataChannelConfig;
@property (retain, nonatomic) HTSLiveGameTagInfo *gameTagInfo;
@property (nonatomic) BOOL hasGameTagInfo;
@property (retain, nonatomic) HTSLiveSandwichBorderInfo *sandwichBorderInfo;
@property (nonatomic) BOOL hasSandwichBorderInfo;
@property (retain, nonatomic) HTSLiveGameRoomSticker *gameRoomSticker;
@property (nonatomic) BOOL hasGameRoomSticker;

+ (id)descriptor;

@end
