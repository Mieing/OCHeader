@class IMBehaviorChattingOP, IMBehaviorMsgOP;

@interface IMBehavior : WXPBGeneratedMessage

@property (nonatomic) int opType;
@property (retain, nonatomic) IMBehaviorChattingOP *chattingOp;
@property (retain, nonatomic) IMBehaviorMsgOP *msgOp;

+ (void)initialize;

@end
