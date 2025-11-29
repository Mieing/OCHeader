@class NSString;

@interface AWEIMSetUserBubbleRequestContext : NSObject

@property (copy, nonatomic) NSString *bubbleID;
@property (nonatomic) long long action;
@property (copy, nonatomic) NSString *conversationShortID;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long conversationType;

- (void).cxx_destruct;

@end
