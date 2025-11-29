@class IESLiveGiftPanelDataSharing, IESLiveGiftDynamicCardSectionModel;

@interface IESLiveGiftDynamicCardSectionViewModel : IESLiveRefactGiftPanelSectionViewModel

@property (retain, nonatomic) IESLiveGiftDynamicCardSectionModel *model;
@property (copy, nonatomic) id /* block */ cardModelChanged;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (nonatomic) BOOL liveGiftPanelNewArchitecture;
@property (nonatomic) BOOL annieXCardEnable;

- (void)bindAction;
- (id)createSectionView;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void)updateWithGiftItem:(id)a0;
- (id)generateModelWithGiftItem:(id)a0;
- (void)p_updateGiftDynamicCardInfoWithGiftItem:(id)a0;
- (unsigned long long)currentDynamicCardTypeWithGiftItem:(id)a0;
- (void).cxx_destruct;

@end
