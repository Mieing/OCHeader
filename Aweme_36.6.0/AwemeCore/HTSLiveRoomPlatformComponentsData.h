@class HTSLiveRoomTitle, RoomBanner, HTSLiveShareComponentInfo, RoomFullVideoBTN, RoomCore, RoomPublicScreenInfo, HTSLiveRoomAvator, HTSLiveRoomViewStats;

@interface HTSLiveRoomPlatformComponentsData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRoomTitle *roomTitle;
@property (nonatomic) BOOL hasRoomTitle;
@property (retain, nonatomic) HTSLiveRoomViewStats *roomCount;
@property (nonatomic) BOOL hasRoomCount;
@property (retain, nonatomic) HTSLiveRoomAvator *roomAvator;
@property (nonatomic) BOOL hasRoomAvator;
@property (retain, nonatomic) RoomPublicScreenInfo *publicScreenInfo;
@property (nonatomic) BOOL hasPublicScreenInfo;
@property (retain, nonatomic) RoomFullVideoBTN *fullVideoBtn;
@property (nonatomic) BOOL hasFullVideoBtn;
@property (retain, nonatomic) RoomBanner *banner;
@property (nonatomic) BOOL hasBanner;
@property (retain, nonatomic) RoomCore *core;
@property (nonatomic) BOOL hasCore;
@property (retain, nonatomic) HTSLiveShareComponentInfo *shareComponentInfo;
@property (nonatomic) BOOL hasShareComponentInfo;

+ (id)descriptor;

@end
