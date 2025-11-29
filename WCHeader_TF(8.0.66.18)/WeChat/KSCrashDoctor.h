@interface KSCrashDoctor : NSObject

+ (id)doctor;

- (id)recrashReport:(id)a0;
- (id)systemReport:(id)a0;
- (id)crashReport:(id)a0;
- (id)infoReport:(id)a0;
- (id)errorReport:(id)a0;
- (int)cpuFamily:(id)a0;
- (id)registerNameForFamily:(int)a0 paramIndex:(int)a1;
- (id)mainExecutableNameForReport:(id)a0;
- (id)crashedThreadReport:(id)a0;
- (id)backtraceFromThreadReport:(id)a0;
- (id)basicRegistersFromThreadReport:(id)a0;
- (id)lastInAppStackEntry:(id)a0;
- (id)lastStackEntry:(id)a0;
- (BOOL)isInvalidAddress:(id)a0;
- (BOOL)isMathError:(id)a0;
- (BOOL)isMemoryCorruption:(id)a0;
- (id)lastFunctionCall:(id)a0;
- (id)zombieCall:(id)a0;
- (BOOL)isStackOverflow:(id)a0;
- (BOOL)isDeadlock:(id)a0;
- (id)appendOriginatingCall:(id)a0 callName:(id)a1;
- (id)diagnoseCrash:(id)a0;

@end
