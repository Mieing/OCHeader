@class NSString;

@interface AWEIMMessageTabLuckyDogTimerComponent : AWEIMComponentBase <AWEIMComponentHostVCLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableIMLuckyDogTimerComponent;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidAppear;
- (void)hostVC_viewWillDisappear;

@end
