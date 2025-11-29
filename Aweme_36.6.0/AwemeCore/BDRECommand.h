@interface BDRECommand : NSObject

+ (id)instructionJsonArrayWithCommands:(id)a0;

- (void)execute:(id)a0 withEnv:(id)a1 error:(id *)a2;
- (id)instruction;

@end
