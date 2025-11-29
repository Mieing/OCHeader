@class NSString, IESLiveGiftPanelDataSharing;

@interface IESLiveGiftDynamicPanelGroupSendItem : NSObject <IESLiveAioLinkGiftGroupCardActionUseCase, IESLiveGiftDynamicPanelItemProtocol>

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)lynxData;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void)didSelectGroupCard:(id)a0 text:(id)a1 giftID:(id)a2;
- (void)sendLog:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
