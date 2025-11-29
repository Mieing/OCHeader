@class HTSEventContext, IESLiveBigPartyGuestInfoViewModel, IESLiveAudioSeatView, IESLiveInteractSeatElementMultiCaster, IESLiveInteractSeatElementLoader, NSString, IESLiveAudioSeatViewModel, IESLiveBigPartyGuestInfoView;
@protocol IESLiveRoomService, IESLiveInteractUserModel;

@interface IESLiveInteractSeatElementBase : NSObject <IESLiveInteractSeatElementProvider, IESLiveInteractSeatElementEvents>

@property (nonatomic) BOOL isMounted;
@property (nonatomic) unsigned long long currentUserRole;
@property (nonatomic) unsigned long long currentScene;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (nonatomic) long long seatIndex;
@property (nonatomic) unsigned long long seatType;
@property (weak, nonatomic) IESLiveInteractSeatElementLoader *elementLoader;
@property (weak, nonatomic) IESLiveInteractSeatElementMultiCaster *multiCaster;
@property (weak, nonatomic) IESLiveBigPartyGuestInfoView *bigPartyGuestInfoView;
@property (weak, nonatomic) IESLiveBigPartyGuestInfoViewModel *bigPartyViewModel;
@property (weak, nonatomic) IESLiveAudioSeatView *audioSeatView;
@property (weak, nonatomic) IESLiveAudioSeatViewModel *audioSeatViewModel;
@property (weak, nonatomic) id<IESLiveInteractUserModel> userModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dynamicUpdateItemInfo:(id)a0;
- (id)dynamicItemId;
- (void)elementSeatTypeDidChanged;
- (void)dynamicResetItem;
- (void)elementLayoutBaseUI;
- (void)elementMount;
- (void)elementUnmount;
- (void).cxx_destruct;

@end
