@interface QGPCommandFactory : NSObject

+ (id)createCommandWithJson:(id)a0 error:(id *)a1;
+ (void)withoutReturnInvocateTarget:(id)a0 Selector:(SEL)a1 command:(id)a2 error:(id *)a3;
+ (id)hasReturnInvocateTarget:(id)a0 Selector:(SEL)a1 command:(id)a2 error:(id *)a3;
+ (id)forwardCommand:(id)a0 command:(id)a1;

@end
