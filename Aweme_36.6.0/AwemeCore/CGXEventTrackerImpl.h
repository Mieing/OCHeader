@class NSString;

@interface CGXEventTrackerImpl : NSObject <CGXEventTrackerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)slardarTrack:(id)a0 category:(id)a1 metric:(id)a2 extra:(id)a3;
- (void)teaTrack:(id)a0 params:(id)a1;

@end
