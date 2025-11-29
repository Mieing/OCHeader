@class IESLiveGiftPanelDataSharing, NSString, IESLiveGiftBuffLynxViewModel;

@interface IESLiveGiftDynamicPanelBuffItem : NSObject <IESLiveGiftDynamicPanelItemProtocol>

@property (retain, nonatomic) IESLiveGiftBuffLynxViewModel *viewModel;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (nonatomic) BOOL canRegister;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerService;
- (id)lynxData;
- (void)updatePanelDataSharing:(id)a0;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void)reloadViewModel;
- (void).cxx_destruct;

@end
