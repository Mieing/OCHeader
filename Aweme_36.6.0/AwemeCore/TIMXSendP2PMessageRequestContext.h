@class NSString, NSOrderedSet, NSDictionary;

@interface TIMXSendP2PMessageRequestContext : NSObject

@property (nonatomic) int sendType;
@property (nonatomic) int conversationType;
@property (nonatomic) long long conversationShortID;
@property (retain, nonatomic) NSString *conversationID;
@property (retain, nonatomic) NSOrderedSet *visibleUser;
@property (nonatomic) long long messageType;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSString *clientMessageId;
@property (nonatomic) int inbox;

- (void).cxx_destruct;

@end
