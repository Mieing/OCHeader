@class IESLiveMIFullLinkIndexMonitorImpl, NSString;

@interface IESLiveMessageInteractionModule : IESLiveModule <IESLiveMessageInteractionService, IESLiveMultiTabAction, IESLivePublicScreenCollectionViewActions, IESLiveMessageInteractionModule>

@property (retain, nonatomic) IESLiveMIFullLinkIndexMonitorImpl *fullLinkIndexMonitorImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)interactContainer;
- (void)selectedToPublicScreenWithInfoModel:(id)a0;
- (void)selectedPublicScreenFromInfoModel:(id)a0 toInfoModel:(id)a1;
- (id)diggInterface;
- (id)audienceMoreToolsInterface;
- (id)landscapeMoreToolsInterface;
- (id)shareInterface;
- (id)liveTipInterface;
- (id)IMEntranceInterface;
- (id)chatChannelInterface;
- (id)messageFeaturedInterface;
- (void)removeRightBottomView;
- (id)currentSelectedPublicScreenInfoModel;
- (BOOL)enableMessageChannel;
- (BOOL)messageChannelEnableExtentHeight;
- (void)multiTabViewDidScrollToTab:(long long)a0;
- (void)multiTabViewDidScrollToTab:(long long)a0 fromTab:(long long)a1;
- (id)provideServices;
- (void)joinChannelWithInviteID:(id)a0;
- (void).cxx_destruct;

@end
