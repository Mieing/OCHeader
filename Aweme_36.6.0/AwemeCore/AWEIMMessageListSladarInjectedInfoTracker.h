@class NSString, IESIMSlardarInjectedInfoTracker;

@interface AWEIMMessageListSladarInjectedInfoTracker : AWEIMComponentBase <AWEIMMessageListSladarInjectedInfoTrackerService>

@property (copy, nonatomic) NSString *vcIdentifyKey;
@property (weak, nonatomic) IESIMSlardarInjectedInfoTracker *slardarTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)addCustomContextValue:(id)a0 bizKey:(id)a1;
- (void)addFilterValue:(id)a0 bizKey:(id)a1;
- (void).cxx_destruct;

@end
