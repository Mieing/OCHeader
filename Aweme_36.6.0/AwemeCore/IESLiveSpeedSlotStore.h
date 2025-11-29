@class HTSEventContext, NSError, HTSLiveToolbarItemExtra, HTSLiveToolbarItem, NSString, SpeedyGiftPopupInfo, IESLiveBottomShortcutButton, IESLiveComponentContext;
@protocol IESLiveRoomService, IESLiveSpeedSlotHolderProtocol;

@interface IESLiveSpeedSlotStore : NSObject <HTSLiveMessageSubscriber, IESLiveToolbarComponentHandler, IESLiveUserActions>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) long long orientation;
@property (nonatomic) unsigned long long showingSlotType;
@property (retain, nonatomic) id<IESLiveSpeedSlotHolderProtocol> showingSlotHolder;
@property (retain, nonatomic) IESLiveBottomShortcutButton *speedGiftButton;
@property (nonatomic) BOOL itemDisable;
@property (retain, nonatomic) HTSLiveToolbarItem *giftItem;
@property (nonatomic) BOOL hasShowShopItem;
@property (nonatomic) BOOL hasShowCommercialEntrance;
@property (nonatomic) BOOL hasShowAudienceTimorEntrance;
@property (nonatomic) BOOL hasShowInteractiveItem;
@property (nonatomic) BOOL hasShowCarItem;
@property (nonatomic) BOOL hasConsumedFirstChargeGift;
@property (nonatomic) BOOL redeemDataReady;
@property (retain, nonatomic) SpeedyGiftPopupInfo *speedyGiftPopupInfoModel;
@property (nonatomic) BOOL didTrackDisplay;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (nonatomic) long long giftGuideTimer;
@property (nonatomic) long long giftGuideTriggerTimes;
@property (nonatomic) long long firstTriggerTime;
@property (nonatomic) BOOL notShowGiftGuide;
@property (retain, nonatomic) NSError *speedGiftCustomError;
@property (retain, nonatomic) HTSLiveToolbarItemExtra *toolBarDataExtra;
@property (nonatomic) BOOL disableCtrlRefresh;
@property (nonatomic) BOOL needRegisterToolBarServiceAfterAPIRequest;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly, nonatomic) long long speedGiftItemStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (void)didSetAttachingDIContext;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)toolbarComponentRemovedReason:(unsigned long long)a0 extra:(id)a1;
- (void)toolbarComponentUpdate:(id)a0;
- (BOOL)convergedModule;
- (void)showSpeedGiftItem;
- (id)initWith:(id)a0 componentContext:(id)a1;
- (id)firstRechargeSpeedyGiftId;
- (void)showSpeedSlotIfNeeded;
- (void)registerToolBarService;
- (BOOL)enableToolbarRedeemEntrance;
- (void)p_monitorSpeedGiftStatusIfNeeded;
- (BOOL)enableToShowSpeedSlot;
- (void)removeSpeedGiftItemForced;
- (id)buildSpeedSlotHolder;
- (id)speedSlotToolbarIdentifer;
- (void)onclickSpeedGiftButton;
- (void)loadSpeedSlotToolBarItem:(unsigned long long)a0;
- (BOOL)enableShowRedeem;
- (BOOL)shouldShowSpecialGift;
- (BOOL)isGeneralSpeedyGiftJumpSchemeScene;
- (void)p_updateSpeedGiftErrorFromErrorCode:(long long)a0 info:(id)a1;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
