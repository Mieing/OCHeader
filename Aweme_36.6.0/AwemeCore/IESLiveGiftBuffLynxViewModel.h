@class NSString, IESLiveGiftPanelDataSharing, RACCommand, HTSLiveGiftBuffInfo, NSMutableArray, HTSLiveGiftMarketingInfo;
@protocol IESLiveGiftPanelReaction, IESLiveGiftModuleRecipientRouter;

@interface IESLiveGiftBuffLynxViewModel : IESLiveRefactGiftPanelSectionViewModel <IESLiveRefactGiftPanelEventAction, IESLiveCollectionViewItemProtocol>

@property (weak, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (retain, nonatomic) NSMutableArray *giftBuffInfosArray;
@property (retain, nonatomic) HTSLiveGiftBuffInfo *cuerrentBuffInfos;
@property (retain, nonatomic) HTSLiveGiftMarketingInfo *giftMarketingInfo;
@property (nonatomic) BOOL buffCardSectionViewDisplaying;
@property (copy, nonatomic) id /* block */ observeCurrentSelectCardBlock;
@property (nonatomic) BOOL liveGiftPanelNewArchitecture;
@property (nonatomic) BOOL annieXCardEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cellClass;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) RACCommand *didSelectItemCommand;
@property (weak, nonatomic) id<IESLiveGiftPanelReaction> reaction;

- (void)didSetAttachingDIContext;
- (void)gpe_didGiftExtraInfoUpdate:(id)a0;
- (id)lynxData;
- (id)createSectionView;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void)bindDataRefresh;
- (void)selectCardWithBuffLevel:(id)a0;
- (void).cxx_destruct;

@end
