@interface IMBehaviorMsgOP : WXPBGeneratedMessage

@property (nonatomic) int msgType;
@property (nonatomic) int msgOpType;
@property (nonatomic) int appMsgInnerType;
@property (nonatomic) int count;

+ (void)initialize;

@end
