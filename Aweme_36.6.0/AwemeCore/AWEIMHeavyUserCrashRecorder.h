@class NSString;

@interface AWEIMHeavyUserCrashRecorder : HTSService <AWEIMHeavyUserCrashRecorder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stashCrashRecorder:(id)a0;
- (id)popStashedCrashRecorder;

@end
