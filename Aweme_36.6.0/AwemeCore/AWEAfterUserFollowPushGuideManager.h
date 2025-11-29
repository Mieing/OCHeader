@class NSString;

@interface AWEAfterUserFollowPushGuideManager : NSObject <AWEUGPushGuideByPitayaExecutorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showPitayaPushGuide:(id)a0;
- (void)registerPushGuideByPitaya;

@end
