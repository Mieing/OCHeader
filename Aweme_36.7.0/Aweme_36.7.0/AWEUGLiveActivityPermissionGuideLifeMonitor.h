@class NSString;

@interface AWEUGLiveActivityPermissionGuideLifeMonitor : NSObject <AWEUGLiveActivityPermissionGuideMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)liveActivityPermissionGuideShowFailed:(id)a0;
- (void)liveActivityPermissionGuideHasShown:(id)a0;
- (void)sendHasShownEventWithModel:(id)a0;
- (void)sendShownFailedEventWithModel:(id)a0;
- (void)startMonitor;

@end
