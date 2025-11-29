@class NSString;

@interface AWETokamakBackgroundTaskProtector : NSObject <ICHBackgroundTaskDelegate> {
    BOOL _enableBacktrace;
}

@property (class, readonly) AWETokamakBackgroundTaskProtector *shared;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)monitor:(id)a0 taskStarted:(unsigned long long)a1 withContext:(id)a2;
- (void)monitor:(id)a0 taskTimeout:(unsigned long long)a1 withContext:(id)a2;
- (void)start;

@end
