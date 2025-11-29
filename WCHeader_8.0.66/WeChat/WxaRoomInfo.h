@class NSString;

@interface WxaRoomInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *shareName;
@property (retain, nonatomic) NSString *opengid;
@property (retain, nonatomic) NSString *openSingleRoomid;
@property (nonatomic) unsigned int chatType;

+ (void)initialize;

@end
