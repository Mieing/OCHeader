@class NSString;

@interface IESIMPublishMessageTrackComponent : AWEIMComponentBase <IESIMPublishMessageTrackComponentInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (id)chatType;
- (void)trackEvent:(id)a0 extraParams:(id)a1;
- (void)trackScreenshotWithShootInfo:(id)a0;
- (void)trackTransImageToVideoEvent:(id)a0 trackObject:(id)a1;
- (void)p_trackTransImageToVideoEvent:(id)a0;

@end
