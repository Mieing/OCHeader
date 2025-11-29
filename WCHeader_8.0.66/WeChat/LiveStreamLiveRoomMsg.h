@class NSString, NSData;

@interface LiveStreamLiveRoomMsg : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *plainTextMsg;
@property (retain, nonatomic) NSData *msgBuffer;
@property (retain, nonatomic) NSString *nickname;

+ (void)initialize;

@end
