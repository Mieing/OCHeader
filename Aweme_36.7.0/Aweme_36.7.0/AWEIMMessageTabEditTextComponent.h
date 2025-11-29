@class NSString;
@protocol AWEIMMessageTabModeInterface;

@interface AWEIMMessageTabEditTextComponent : AWEIMComponentBase <AWEIMMessageTabNaviButtonProvider>

@property (weak, nonatomic) id<AWEIMMessageTabModeInterface> messageTabModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (long long)buttonPosition;
- (BOOL)canShowInPlusPanel;
- (id)plusButtonModel;
- (void)p_didClickInPlusPanel;
- (void).cxx_destruct;

@end
