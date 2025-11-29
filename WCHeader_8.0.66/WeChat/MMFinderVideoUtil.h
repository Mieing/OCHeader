@interface MMFinderVideoUtil : NSObject

+ (struct { int x0; int x1; })calculateDiemnsDividedByTwo:(int)a0 andHeight:(int)a1;
+ (id)parameterSetsFromNalus:(id)a0 forHevc:(BOOL)a1;
+ (long long)h264NalTypeFromValue:(const char *)a0;
+ (BOOL)isParameterSetsComplete:(id)a0 forHevc:(BOOL)a1;
+ (id)annexBNalusFrom:(const char *)a0 length:(unsigned long long)a1;
+ (id)getAVCCFrameFromAnnexB:(const char *)a0 length:(unsigned long long)a1;
+ (const char *)searchNalStartFrom:(const char *)a0 length:(long long)a1 startCodeLen:(long long *)a2;

@end
