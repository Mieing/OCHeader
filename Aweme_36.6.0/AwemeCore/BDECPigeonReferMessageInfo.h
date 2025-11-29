@class NSString;

@interface BDECPigeonReferMessageInfo : NSObject

@property (nonatomic) long long serverMessageID;
@property (nonatomic) long long messageType;
@property (copy) NSString *hint;
@property long long status;
@property (nonatomic) long long rootMessageServerID;
@property (nonatomic) long long rootMessageConversationIndex;

- (void).cxx_destruct;

@end
