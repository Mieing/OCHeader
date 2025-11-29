@interface AWESECAppJumpDataCollector : NSObject

+ (void)_uploadEventInfoAndTrackItemToAppLogWithEvent:(id)a0 isRealAppJump:(BOOL)a1;
+ (void)asyncUploadEventInfoAndTrackItemToAppLogWithEvent:(id)a0;
+ (void)asyncTrackAppLogWithParams:(id)a0;
+ (void)asyncTrackALogWithParams:(id)a0;
+ (void)asyncTrackAppLogWithParams:(id)a0 withSampleRate:(unsigned long long)a1 exportTime:(unsigned long long)a2;
+ (void)asyncTrackUserExceptionWithParams:(id)a0 withSampleRate:(unsigned long long)a1 exportTime:(unsigned long long)a2;
+ (BOOL)sampleCollectWithSampleRate:(unsigned long long)a0 exportTime:(unsigned long long)a1;
+ (void)uploadEventInfoAndTrackItemToAppLogWithEvent:(id)a0 isRealAppJump:(BOOL)a1;
+ (void)asyncTrackUserExceptionWithParams:(id)a0;

@end
