@class NSString;

@interface WARemoteDebug_RoomInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL joinRoom;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSString *originalMd5;
@property (nonatomic) unsigned int roomStatus;
@property (nonatomic) unsigned int wxConnStatus;
@property (nonatomic) unsigned int devConnStatus;

+ (void)initialize;

@end
