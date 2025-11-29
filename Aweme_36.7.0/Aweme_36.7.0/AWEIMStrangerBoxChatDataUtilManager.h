@interface AWEIMStrangerBoxChatDataUtilManager : NSObject

@property (nonatomic) BOOL isInStrangerBox;

+ (id)sharedManager;

- (id)getStrangerBizInfo;

@end
