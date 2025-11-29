@class NSArray, NSDictionary, IESLiveGiftPanelDataSharing, HTSLiveGiftMarketingInfo, NSString, RACCommand;
@protocol IESLiveGiftPanelReaction;

@interface IESLiveGiftBuffItem : IESLiveRefactGiftPanelSectionViewModel <IESLiveRefactGiftPanelEventAction, IESLiveCollectionViewItemProtocol, IESLiveGiftBuffCardViewDelegate>

@property (nonatomic) BOOL hasOpenTraySchemaUrl;
@property (retain, nonatomic) NSDictionary *cardSettingConfig;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (retain, nonatomic) NSArray *cardsConfigs;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) HTSLiveGiftMarketingInfo *giftMarketingInfo;
@property (nonatomic) BOOL buffCardSectionViewDisplaying;
@property (copy, nonatomic) id /* block */ selectedIndexChanged;
@property (copy, nonatomic) id /* block */ cardsConfigsChanged;
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
- (void)gpe_onSelectedWithItem:(id)a0 changed:(BOOL)a1;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void)p_refreshgiftMarketingInfoWithItem:(id)a0;
- (BOOL)marketMixAreaDisplaying;
- (void)trackCardClickWithIndex:(long long)a0 unlock:(BOOL)a1 select:(BOOL)a2;
- (void)updateBuffCardIndex2ChosenTypeWithIndex:(long long)a0 chosenType:(long long)a1;
- (BOOL)canManualSelectCard;
- (void)showLockedToastWithIndex:(long long)a0;
- (void)selectCard:(BOOL)a0 withIndex:(long long)a1;
- (void)trackCardShowingWithIndex:(long long)a0;
- (void)bindDataRefresh;
- (void)p_refreshCardConfigWithItem:(id)a0;
- (id)p_createRemainTimeStringWithExpiredAt:(id)a0;
- (BOOL)p_shouldShimmerWithBuffGiftId:(long long)a0;
- (void)updateWithGiftItem:(id)a0;
- (void).cxx_destruct;

@end
