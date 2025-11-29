@interface ConfRoomInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long imroomid;
@property (nonatomic) unsigned long long roomid;
@property (nonatomic) unsigned int roomType;
@property (nonatomic) unsigned int selfMemberid;

+ (void)initialize;

@end
