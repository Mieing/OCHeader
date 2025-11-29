@class HTSLiveCommon, HTSLiveResidentGuestAllowContent;

@interface HTSLiveResidentGuestMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int msgType;
@property (readonly, nonatomic) int contentOneOfCase;
@property (retain, nonatomic) HTSLiveResidentGuestAllowContent *guestAllowContent;
@property (retain, nonatomic) HTSLiveResidentGuestAllowContent *linkmicRoomAllowContent;

+ (id)descriptor;

@end
