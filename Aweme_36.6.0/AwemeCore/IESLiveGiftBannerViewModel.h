@class HTSEventContext, IESLiveGiftPanelDataSharing, HTSLiveGiftBanner, HTSLiveGiftStruct, NSString;
@protocol IESLiveURLSchemaHandler, IESLiveGiftModuleRecipientRouter;

@interface IESLiveGiftBannerViewModel : NSObject <HTSLiveGiftActions, HTSLiveMessageSubscriber>

@property (retain, nonatomic) HTSLiveGiftStruct *giftModel;
@property (retain, nonatomic) HTSLiveGiftBanner *giftBanner;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *dataSharing;
@property (nonatomic) BOOL animateWhenComboEnd;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaURLHandler;
@property (weak, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ shakeGiftBannerImageView;
@property (nonatomic) BOOL liveGiftPanelNewArchitecture;
@property (nonatomic) BOOL annieXCardEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didSendGiftWithCost:(long long)a0;
- (id)lynxData;
- (id)getComponentsWithURLString:(id)a0;
- (void)openGiftBanner;
- (void)pr_setup;
- (void)addGiftMessageHandler;
- (BOOL)bannerIsAvaliable;
- (void)prepareForOpenURL;
- (void)updateGiftBanner:(id)a0;
- (id)initWithGiftModel:(id)a0 dataSharing:(id)a1;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
