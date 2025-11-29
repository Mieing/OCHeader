@class NSString, NSMutableDictionary, AWEIMLiveGroupAnnouncementInfo, AWEIMCollapsibleBannerViewModel;

@interface AWEIMLiveGroupAnnouncementBannerComponent : AWEIMCollapsibleBannerBaseComponent <AWEIMEnterChatInfoOtherSubscriberProtocol, AWEIMCollapsibleBannerViewModelDelegate>

@property (nonatomic) BOOL requestInfoOtherWithShowedLiveGroupAnnouncement;
@property (copy, nonatomic) NSString *infoOtherRequestParamsInJson;
@property (retain) AWEIMLiveGroupAnnouncementInfo *lastShowedLiveGroupAnnouncementInfo;
@property (retain) AWEIMCollapsibleBannerViewModel *displayingLiveGroupAnnoucementBanner;
@property (retain) NSMutableDictionary *bannerId2LiveGroupAnnouncement;
@property (nonatomic) BOOL enableLiveAnnouncementOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (void)__handleDidUpdateSubscribeStatusNty:(id)a0;
- (void)didDisplayBannerOnCollapsedModeWithViewModel:(id)a0;
- (void)didDisplayBannerOnExpandedModeWithViewModel:(id)a0;
- (void)didSelectBannerWithViewModel:(id)a0;
- (void)__didDisplayedBanner:(id)a0;
- (void)__fetchLastDisplayedLiveAnnoucementInStore;
- (void)__buildRequestParamsWithLocalValue:(id)a0;
- (void)__showBannerWithLiveGroupAnnoucementInfo:(id)a0;
- (void)__handleValidLiveAnnounmentShowNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
