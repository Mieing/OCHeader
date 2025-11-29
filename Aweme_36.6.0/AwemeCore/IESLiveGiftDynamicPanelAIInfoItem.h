@class NSString, IESLiveGiftPanelDataSharing;

@interface IESLiveGiftDynamicPanelAIInfoItem : NSObject <IESLiveGiftDynamicPanelItemProtocol>

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)lynxData;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void).cxx_destruct;

@end
