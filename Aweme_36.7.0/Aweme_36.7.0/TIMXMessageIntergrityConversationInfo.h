@class NSString;

@interface TIMXMessageIntergrityConversationInfo : NSObject <TIMXMessageIntergrityConversationInfoProtocol>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long shortID;
@property (nonatomic) int type;

- (void).cxx_destruct;

@end
