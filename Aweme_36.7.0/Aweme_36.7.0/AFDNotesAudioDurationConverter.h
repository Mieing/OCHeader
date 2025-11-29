@class NSString;

@interface AFDNotesAudioDurationConverter : NSObject <AFDNotesAudioDurationConverterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)maxRecordAudioSecond;
+ (long long)getIntValueFromMilliseconds:(double)a0;
+ (long long)getSecondsFromNotesInfo:(id)a0;
+ (double)getMillisecondsFromNotesInfo:(id)a0;
+ (double)getSecondsFromMilliseconds:(double)a0;
+ (long long)getIntValueFromSeconds:(double)a0;


@end
