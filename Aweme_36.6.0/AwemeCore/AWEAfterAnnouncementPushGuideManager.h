@class NSDictionary, NSString;

@interface AWEAfterAnnouncementPushGuideManager : NSObject <AWEUGPushGuideByPitayaExecutorDelegate, AWEUGPushGuideLifeCycleProtocol>

@property (retain, nonatomic) NSDictionary *originTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)showPitayaPushGuide:(id)a0;
- (void)registerPushGuideByPitaya;
- (void)pushGuideShowSuccess:(id)a0;
- (void)pushGuideActionConfirm:(id)a0 selectionType:(id)a1;
- (void).cxx_destruct;

@end
