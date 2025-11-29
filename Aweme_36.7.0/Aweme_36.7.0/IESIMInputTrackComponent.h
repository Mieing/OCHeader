@class NSString;

@interface IESIMInputTrackComponent : AWEIMComponentBase <IESIMInputTrackComponentInterface>

@property (nonatomic) BOOL hasTrackInitInputType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)trackEvent:(id)a0 info:(id)a1;

@end
