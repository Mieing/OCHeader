@class NSString;
@protocol IESLiveGiftFullLinkMonitor, IESLiveFaceGiftExternalMgrRouter;

@interface IESLiveGiftModule : IESLiveModule <IESLiveGiftModule>

@property (weak, nonatomic) id<IESLiveFaceGiftExternalMgrRouter> faceGiftExternalInterfaceInstance;
@property (retain, nonatomic) id<IESLiveGiftFullLinkMonitor> fullLinkMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)giftAnimationInterface;
- (id)giftListInterface;
- (id)baseGiftListInterface;
- (id)vsGiftInterface;
- (id)voteInterface;
- (id)speedGiftInterface;
- (id)dynamicGiftInterface;
- (id)giftRecipientInterface;
- (id)alphaVideoPlayerInterface;
- (id)faceGiftExternalInterface;
- (id)interactiveGiftInterface;
- (id)stickerAudienceInterface;
- (id)activityAnimationInterface;
- (id)giveGiftInterface;
- (id)giftManagerInterface;
- (id)giftInterface;
- (void).cxx_destruct;

@end
