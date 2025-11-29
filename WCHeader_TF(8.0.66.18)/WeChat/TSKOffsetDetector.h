@interface TSKOffsetDetector : NSObject

+ (struct TSKDetectParams_ { int x0; int x1; double x2; int x3; int x4; int x5; })defaultDetectParams;
+ (BOOL)detectOffsetBetweenPath:(id)a0 andPath:(id)a1 sampleRate:(int)a2 channels:(int)a3 params:(struct TSKDetectParams_ { int x0; int x1; double x2; int x3; int x4; int x5; } *)a4 offsetMs:(int *)a5;

@end
