@class NSString, IESLiveGiftPanelDataSharing;

@interface IESLiveGiftDynamicPanelTopModeItem : UIView <IESLiveGiftDynamicPanelItemProtocol>

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (nonatomic) BOOL currentTopModeCanHide;
@property (nonatomic) unsigned long long currentTopMode;
@property (nonatomic) BOOL isReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)registerService;
- (id)lynxData;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void).cxx_destruct;

@end
