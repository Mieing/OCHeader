@interface AudioUtil : NSObject

+ (unsigned int)calcVoiceTime:(unsigned int)a0 VoiceFormat:(unsigned int)a1;
+ (unsigned int)calcSilkVoiceTime:(id)a0;
+ (void)reportStartRecordCost:(id)a0;
+ (id)getReportJson:(id)a0;
+ (void)reportIDKeyWithStart:(int)a0 allCost:(unsigned long long)a1;

@end
