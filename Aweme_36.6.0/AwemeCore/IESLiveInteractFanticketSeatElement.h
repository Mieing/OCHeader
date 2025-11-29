@class IESLiveInteractDynamicGiftIconElementInfoModel, NSString, IESLiveInteractionFanTicketView;
@protocol IESLiveInteractionLayoutRouter, IESLiveCompoundSubscription, IESLiveFontScaleConfig, IESLiveSettings;

@interface IESLiveInteractFanticketSeatElement : IESLiveInteractSeatElementBase <IESLiveInteractFanticketSeatElementProvider>

@property (retain, nonatomic) IESLiveInteractionFanTicketView *fanTicketView;
@property (retain, nonatomic) IESLiveInteractDynamicGiftIconElementInfoModel *dynamicValue;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> compoundDisposable;
@property (weak, nonatomic) id<IESLiveFontScaleConfig> fontScaleConfiguration;
@property (weak, nonatomic) id<IESLiveSettings> settings;
@property (weak, nonatomic) id<IESLiveInteractionLayoutRouter> layoutRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interactionPlaymodeDidStart:(int)a0;
- (void)interactionPlaymodeDidEnd:(int)a0;
- (void)dynamicUpdateItemInfo:(id)a0;
- (id)dynamicItemId;
- (void)dynamicUpdatePosition:(struct CGPoint { double x0; double x1; })a0;
- (void)enlargeTypeDidChange;
- (void)prepareTeamFight:(long long)a0;
- (void)startTeamFight:(long long)a0;
- (void)finishTeamFight:(long long)a0;
- (id)setupEventListener;
- (unsigned long long)bigPartyFanTicketIndex:(id)a0;
- (void)updateFanTicketText:(id)a0 quickInteract:(id)a1;
- (void)elementSeatTypeDidChanged;
- (void)dynamicResetItem;
- (void)setupEventListenerIfNeeded;
- (void)updateAudioFanTicketViewRect;
- (BOOL)isBigparty;
- (void)didClickFanticketView;
- (void)updateFanTicketViewIconType;
- (void)elementLayoutBaseUI;
- (void)elementMount;
- (void)elementUnmount;
- (BOOL)isAnchorSeat;
- (BOOL)mvpSeatWidgetEnable;
- (void).cxx_destruct;
- (void)setUserModel:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })hitTestEdgeInsets;
- (void)setupView;

@end
