@interface WBProvideMessageForWeiboRequest : WBBaseRequest

+ (Class)associateResponseClass;

- (BOOL)canBeReceived;
- (BOOL)canBeSent;

@end
