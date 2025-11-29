@interface DTRpcExceptionMXXTIY : NSException

@property (nonatomic) int code;

+ (id)exceptionWithName:(id)a0 reason:(id)a1 userInfo:(id)a2 code:(int)a3;
+ (void)raise:(int)a0 message:(id)a1;
+ (void)raise:(int)a0 message:(id)a1 userInfo:(id)a2;

@end
