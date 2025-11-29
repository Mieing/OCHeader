@class NSString;

@interface AWEDCFeedSwitchPreviewMonitorComponent : AWEDCFeedSwitchPreviewBaseComponent <AWEDCFeedSwitchPreviewMonitorComponentProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEnterAnimationBegin;
- (void)trackEnterAnimationEnd;
- (void)addCustomExtra:(id)a0;

@end
