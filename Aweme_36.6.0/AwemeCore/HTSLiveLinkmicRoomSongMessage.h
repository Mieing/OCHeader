@class HTSLiveCommon, IESLiveRoomSongInfo;

@interface HTSLiveLinkmicRoomSongMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) IESLiveRoomSongInfo *roomSongInfo;
@property (nonatomic) BOOL hasRoomSongInfo;
@property (nonatomic) long long updateTime;
@property (nonatomic) long long isMvPlaying;

+ (id)descriptor;

@end
