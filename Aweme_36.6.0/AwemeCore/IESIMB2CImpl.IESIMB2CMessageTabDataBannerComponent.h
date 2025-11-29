@interface IESIMB2CImpl.IESIMB2CMessageTabDataBannerComponent : AWEIMComponentBase <IESIMB2CMessageTabNewBannerInterface, AWEIMChatListHeaderProvider, IESIMUserServiceMessage> {
    void /* unknown type, empty encoding */ bannerService;
    void /* unknown type, empty encoding */ naviBubbleService;
    void /* unknown type, empty encoding */ headerService;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_container;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bannerView;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewWillDisappear;
- (void)refreshToOpenHighlyProspectiveStatus;
- (void)didChangedBackgroudTheme;
- (BOOL)canShowNewBannerView;
- (BOOL)canShowCurrentHeader;
- (id)headerViewForChatList;
- (void).cxx_destruct;
- (id)init;
- (id)trackIdentifier;
- (void)dealloc;

@end
