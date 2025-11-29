@interface SpeechLogTracker : NSObject

+ (id)sharedInstanceWithDeviceId:(id)a0 appId:(id)a1 userId:(id)a2;

- (void)writeLogWithLevel:(int)a0 tag:(id)a1 content:(id)a2;
- (void)writeLogWithTag:(id)a0 content:(id)a1;

@end
