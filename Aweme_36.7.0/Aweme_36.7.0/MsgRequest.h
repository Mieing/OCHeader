@interface MsgRequest : GPBMessage

@property (nonatomic) int cmd;
@property (nonatomic) BOOL hasCmd;

+ (id)descriptor;

@end
