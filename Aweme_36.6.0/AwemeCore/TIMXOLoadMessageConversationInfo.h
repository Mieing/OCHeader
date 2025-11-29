@class NSString;

@interface TIMXOLoadMessageConversationInfo : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long shortID;
@property (nonatomic) int inbox;
@property (nonatomic) int type;

- (void).cxx_destruct;

@end
