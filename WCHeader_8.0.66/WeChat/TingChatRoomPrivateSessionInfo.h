@class NSString, NSMutableArray;

@interface TingChatRoomPrivateSessionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sessionKey;
@property (retain, nonatomic) NSString *latestExposedMessageId;
@property (retain, nonatomic) NSMutableArray *recommendMusicMessageIds;
@property (retain, nonatomic) NSString *userKeyFirst;
@property (retain, nonatomic) NSString *userKeySecond;

+ (void)initialize;

@end
