@protocol IESIMConversationProtocol;

@interface AWEIMElfBotMemorySyncStartAskContext : NSObject

@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (nonatomic) unsigned long long userOptions;
@property (nonatomic) long long peerUserTime;
@property (nonatomic) long long currentUserTime;

- (void).cxx_destruct;

@end
