@class OnlineUser, JumpInfo;

@interface Slot : WXPBGeneratedMessage

@property (nonatomic) unsigned int slotType;
@property (retain, nonatomic) OnlineUser *onlineUserStatus;
@property (retain, nonatomic) JumpInfo *jumpInfo;

+ (void)initialize;

@end
