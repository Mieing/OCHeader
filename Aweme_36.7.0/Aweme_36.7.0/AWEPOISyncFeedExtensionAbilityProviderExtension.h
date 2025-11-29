@class NSString;
@protocol AWEPOISyncFeedExtensionProtocol;

@interface AWEPOISyncFeedExtensionAbilityProviderExtension : AWEPOIBaseExtension <AWEPOISyncFeedExtensionDelegateProtocol>

@property (readonly, weak, nonatomic) id<AWEPOISyncFeedExtensionProtocol> syncFeedManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasMoreWithPageModel:(id)a0;
- (id)awemeModelWithViewModelTag:(id)a0;
- (void)syncFeedExtensionDidFetchRawData:(id)a0 error:(id)a1;
- (id)zoomTransitionStartViewWithViewModelTag:(id)a0;
- (void)syncFeedExtensionWillReturnToViewModelTag:(id)a0 isScrolled:(BOOL)a1;
- (void)syncFeedExtensionDidReturnToViewModelTag:(id)a0;
- (id)syncFeedGroupComponentNodeTagList;

@end
