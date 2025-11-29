@class NSString, IESLiveGiftPanelDataSharing, RACCommand, NSNumber;
@protocol IESLiveGiftPanelReaction;

@interface IESLiveGiftRedeemItem : IESLiveRefactGiftPanelSectionViewModel <IESLiveIncomeResultUpdateAction, IESLiveCollectionViewItemProtocol>

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (retain, nonatomic) NSNumber *diamond;
@property (nonatomic) BOOL showRedeemView;
@property (copy, nonatomic) id /* block */ diamondDidUpdated;
@property (copy, nonatomic) id /* block */ shouldShowRedeemView;
@property (copy, nonatomic) id /* block */ showRedeemTipAction;
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
- (void)incomeResultDidUpdate;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void)p_registertIncomeUpdate;
- (void)p_registerRedeemTip;
- (void)updateIncomeInfo;
- (void)tr_redeemEntranceClickWithResult:(BOOL)a0;
- (void)tr_redeemEntranceShow;
- (void)p_updateDataWithIncomeResult:(id)a0;
- (BOOL)p_showShowRedeemView:(id)a0;
- (void)p_showRedeemTipWithCompletion:(id /* block */)a0;
- (BOOL)p_shouldShowRedeemTip;
- (void)tapRedeemEntrance;
- (void)didMoveToSuperView;
- (void).cxx_destruct;

@end
