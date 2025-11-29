@class AWEIMEnterpriseModeExpandedDataBannerView, NSDictionary, AWEIMEnterpriseModeDataBannerViewModel, NSString;
@protocol AWEIMChatListHeaderInterface, AWEIMMessageTabBannerInterface, AWEIMMessageTabNaviBubbleInterface;

@interface AWEIMEnterpriseModeDataBannerComponent : AWEIMComponentBase <AWEIMChatListHeaderProvider, AWEUserMessage, IESIMB2CMessageTabDataBannerInterface>

@property (retain, nonatomic) AWEIMEnterpriseModeExpandedDataBannerView *bannerView;
@property (retain, nonatomic) AWEIMEnterpriseModeDataBannerViewModel *viewModel;
@property (weak, nonatomic) id<AWEIMChatListHeaderInterface> headerService;
@property (weak, nonatomic) id<AWEIMMessageTabBannerInterface> bannerService;
@property (weak, nonatomic) id<AWEIMMessageTabNaviBubbleInterface> naviGuideService;
@property (copy) NSDictionary *innerModelStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didFetchB2CMessageTabBannerData:(id)a0 error:(id)a1;
- (BOOL)canShowCurrentHeader;
- (id)headerViewForChatList;
- (id)p_fetchInnerModelViaCache;
- (void)__updateViewModelWithModel:(id)a0 canOverwrite:(BOOL)a1;
- (void)p_saveCacheOfInnerModel:(id)a0;
- (void).cxx_destruct;
- (id)trackIdentifier;
- (void)dealloc;

@end
