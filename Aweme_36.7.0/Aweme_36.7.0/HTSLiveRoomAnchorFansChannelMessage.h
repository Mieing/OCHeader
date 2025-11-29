@class GPBInt64ObjectDictionary, HTSLiveCommon, RoomChannelInfo;

@interface HTSLiveRoomAnchorFansChannelMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) RoomChannelInfo *fansClubChannel;
@property (nonatomic) BOOL hasFansClubChannel;
@property (retain, nonatomic) RoomChannelInfo *subscribeChannel;
@property (nonatomic) BOOL hasSubscribeChannel;
@property (retain, nonatomic) GPBInt64ObjectDictionary *fansGroupChannelMap;
@property (readonly, nonatomic) unsigned long long fansGroupChannelMap_Count;

+ (id)descriptor;

@end
