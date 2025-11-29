@class NSString;

@interface TIMXOBroadCastCMDMessage : NSObject

@property (nonatomic) unsigned long long cmdType;
@property (nonatomic) long long serverMessageID;
@property (copy, nonatomic) NSString *belongingConversationIdentifier;

- (void).cxx_destruct;

@end
