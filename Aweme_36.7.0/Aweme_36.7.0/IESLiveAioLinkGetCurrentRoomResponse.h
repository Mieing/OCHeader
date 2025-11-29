@class HTSLiveRoom;

@interface IESLiveAioLinkGetCurrentRoomResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) BOOL hasRoom;

+ (id)descriptor;

@end
