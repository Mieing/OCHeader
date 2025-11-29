@interface IESIMSendMsgFlowError : NSError

+ (id)flowErrorWithError:(id)a0 descCode:(unsigned long long)a1;
+ (id)descriptionForCode:(unsigned long long)a0;
+ (id)errorWithCode:(unsigned long long)a0;

@end
