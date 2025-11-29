@class NSString, IESIMButton;
@protocol AWEIMMessageTabModeInterface;

@interface AWEIMMessageTabSearchComponent : AWEIMComponentBase <AWEIMMessageTabNaviButtonProvider, AWEIMMessageTabSearchInterface>

@property (retain, nonatomic) IESIMButton *barIconSearchButton;
@property (readonly, nonatomic) BOOL shouldChangeButtonAlphaWithListPosition;
@property (weak, nonatomic) id<AWEIMMessageTabModeInterface> messageTabModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (long long)buttonPosition;
- (BOOL)canShowInNaviBar;
- (id)customNaviButtonView;
- (BOOL)canShowInPlusPanel;
- (id)plusButtonModel;
- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (id)p_customizeButtonPosition;
- (void)messageListDidScrollWithOffset:(double)a0;
- (void)p_didClickSearchInPlusPanel;
- (void)p_adjustSearchBarAlphaIfNecessaryWithMessageListOffset:(double)a0;
- (void)p_transferToIMSearch;
- (void)p_didClickSearchButton;
- (void).cxx_destruct;

@end
