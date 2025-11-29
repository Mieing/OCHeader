@class NSString;

@interface AWEIMMessageTabStartIMComponent : AWEIMComponentBase <AWEUserMessage>

@property (readonly, nonatomic) BOOL tryLoginIMOnlyIfUserHasLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;

- (void)didFinishLoginWithUid:(id)a0;
- (void)hostVC_viewWillAppear;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewWillDisappear;
- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (void)p_trackBigFontMode;
- (void)p_recordViewHierarchy:(id)a0 logStr:(id)a1;
- (id)init;
- (void)dealloc;

@end
