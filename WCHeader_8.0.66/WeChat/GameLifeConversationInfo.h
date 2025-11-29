@class GameLifeConversation, NSString;

@interface GameLifeConversationInfo : NSObject

@property (retain, nonatomic) GameLifeConversation *conversation;
@property (retain, nonatomic) NSString *externInfo;
@property (nonatomic) unsigned int msgType;

- (void).cxx_destruct;

@end
