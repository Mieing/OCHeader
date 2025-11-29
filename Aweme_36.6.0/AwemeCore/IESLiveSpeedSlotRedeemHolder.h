@class HTSEventContext, NSString, IESLiveBottomShortcutButton;
@protocol IESLiveRoomService;

@interface IESLiveSpeedSlotRedeemHolder : NSObject <IESLiveSpeedSlotHolderProtocol>

@property (retain, nonatomic) IESLiveBottomShortcutButton *redeemButton;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWith:(id)a0 componentContext:(id)a1 trackContext:(id)a2;
- (void)tr_toolbarItemClick;
- (void)willLoadSpeedSlotItem:(id)a0 interactionResponder:(id)a1;
- (void)didSpeedSlotItemClicked:(id)a0 interactionResponder:(id)a1;
- (void)didLoadSpeedSlotItem:(id)a0 interactionResponder:(id)a1;
- (void)tr_toolbarItemShow;
- (void).cxx_destruct;

@end
