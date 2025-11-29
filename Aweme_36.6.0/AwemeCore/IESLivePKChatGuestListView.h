@class UIView, NSString, NSArray, IESLivePKChatSlotView, NSMutableDictionary, IESLiveSmallAudienceRequestView, NSMutableArray, IESLivePKChatGuestListViewConfig;
@protocol IESLiveInteractiveExtendUserService, IESLivePKChatGuestListViewDelegate;

@interface IESLivePKChatGuestListView : UIView <IESLiveInteractiveUserServiceDelegate>

@property (retain, nonatomic) id<IESLiveInteractiveExtendUserService> userService;
@property (retain, nonatomic) NSMutableDictionary *uidToGuestView;
@property (retain, nonatomic) NSMutableArray *slots;
@property (nonatomic) double itemPortraitSpace;
@property (retain, nonatomic) UIView *ownSlotsView;
@property (retain, nonatomic) IESLivePKChatSlotView *ownFirstSlot;
@property (retain, nonatomic) IESLivePKChatSlotView *ownSecondSlot;
@property (retain, nonatomic) UIView *oppositeSlotsView;
@property (retain, nonatomic) IESLivePKChatSlotView *oppositeFirstSlot;
@property (retain, nonatomic) IESLivePKChatSlotView *oppositeSecondSlot;
@property (weak, nonatomic) id<IESLivePKChatGuestListViewDelegate> delegate;
@property (retain, nonatomic) IESLiveSmallAudienceRequestView *preView;
@property (retain, nonatomic) UIView *centerLineView;
@property (retain, nonatomic) IESLivePKChatGuestListViewConfig *config;
@property (retain, nonatomic) NSArray *curSessions;
@property (nonatomic) BOOL muteOppositeRoom;
@property (nonatomic) BOOL lastOwnSlotViewHiden;
@property (retain, nonatomic) NSMutableDictionary *emptyViewPixelBuffers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)multiLinkerUserService:(id)a0 didInteractiveListUpdated:(id)a1;
- (void)multiLinkerUserService:(id)a0 didCurrentRoomInteractListUpdated:(id)a1 oppositeRoomInteractListUpdated:(id)a2;
- (void)multiLinkerUserService:(id)a0 didOppositeRoomSilenceStateUpdated:(BOOL)a1;
- (void)resetSoltsWithAppData:(id)a0;
- (void)clearListView;
- (id)fetchOwnEmptySlot:(long long)a0;
- (id)fetchOppositeEmptySlot:(long long)a0;
- (id)p_creatInfoView;
- (void)updateSlotsView;
- (id)packRtcView:(id)a0 andInfoView:(id)a1;
- (void)updateLayoutWithSessions:(id)a0;
- (BOOL)shouldHideOwnSlots;
- (BOOL)shouldHideOppositeSlots;
- (long long)ownGuestCount;
- (long long)oppositeGuestCount;
- (void)muteOppositeRoomGuestByLocal:(BOOL)a0;
- (void)addOwnPreviewToListIfNeeded;
- (void)reUpdateLayoutWithSessionsIfNeeded;
- (void)updateLayoutWithAppData:(id)a0;
- (BOOL)slotContainerHiden:(long long)a0;
- (id)findOppositeEmptySlot;
- (void)addOwnPreview:(id)a0;
- (void)onSwitchConnectMode;
- (id)emojiContainerForUserID:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
