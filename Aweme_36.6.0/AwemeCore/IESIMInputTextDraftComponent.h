@class NSString;
@protocol IESIMThrottleDebounceAction;

@interface IESIMInputTextDraftComponent : AWEIMComponentBase <IESIMInputTextDraftInterface>

@property (retain, nonatomic) id<IESIMThrottleDebounceAction> debounce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_willDealloc;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewWillDisappear;
- (void)handleApplicationWillTerminationNty:(id)a0;
- (void)restoreInputTextDraft;
- (void)saveInputTextDraft;
- (void)saveInputTextDraftWithDebounce;
- (void)notifyDraftUpdate:(id)a0;
- (void).cxx_destruct;

@end
