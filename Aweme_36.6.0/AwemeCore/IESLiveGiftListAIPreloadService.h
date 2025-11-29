@class HTSLiveGivingServiceWrapper;
@protocol IESLiveRoomService, IESLiveGiftModuleRecipientRouter, IESLiveGiftAiService;

@interface IESLiveGiftListAIPreloadService : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveGiftAiService> clientAIService;
@property (retain, nonatomic) HTSLiveGivingServiceWrapper *serviceWrapper;
@property (retain, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (nonatomic) double preloadRequestInterval;
@property (nonatomic) double lastRequestTime;

- (void)didSetAttachingDIContext;
- (id)initWithRoom:(id)a0 context:(id)a1 giftListService:(id)a2;
- (void)removeGiftListPreloadMessageHandle;
- (unsigned long long)currentGiftListScene;
- (void)setupSmartGiftListPreload;
- (void).cxx_destruct;

@end
