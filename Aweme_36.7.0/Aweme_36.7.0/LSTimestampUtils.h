@interface LSTimestampUtils : NSObject

+ (void)correctTimeStampHostTime:(unsigned long long *)a0 withSamples:(long long)a1 withSamplerate:(double)a2;
+ (double)machTimeToMicroSecs:(unsigned long long)a0;
+ (struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; })TimeStampOffset:(struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; })a0 withSamples:(long long)a1 withSamplerate:(double)a2;
+ (double)getDurationMicroSecondTime:(unsigned long long)a0;

@end
