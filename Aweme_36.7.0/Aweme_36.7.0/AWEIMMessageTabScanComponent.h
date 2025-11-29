@class NSString;
@protocol AWEIMMessageTabModeInterface;

@interface AWEIMMessageTabScanComponent : AWEIMComponentBase <AWEIMMessageTabNaviButtonProvider, AWEIMMessageTabScanInterface>

@property (weak, nonatomic) id<AWEIMMessageTabModeInterface> messageTabModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;

- (void)afterInitialComponentAllResolved:(id)a0;
- (long long)buttonPosition;
- (BOOL)canShowInPlusPanel;
- (id)plusButtonModel;
- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (void)p_didClickInPlusPanel;
- (void).cxx_destruct;

@end
