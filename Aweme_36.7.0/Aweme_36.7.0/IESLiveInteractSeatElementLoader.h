@class HTSEventContext, IESLiveAudioSeatView, NSArray, IESLiveInteractSeatElementMultiCaster, IESLiveBigPartyGuestInfoViewModel, NSString, IESLiveAudioSeatViewModel, IESLiveBigPartyGuestInfoView;
@protocol IESLiveRoomService, IESLiveInteractUserModel;

@interface IESLiveInteractSeatElementLoader : NSObject <IESLiveInteractSeatElementProvider>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (nonatomic) unsigned long long loadScene;
@property (nonatomic) unsigned long long currentTarget;
@property (nonatomic) BOOL isPreview;
@property (retain, nonatomic) IESLiveInteractSeatElementMultiCaster *multiCaster;
@property (readonly, nonatomic) NSArray *elements;
@property (nonatomic) unsigned long long seatType;
@property (nonatomic) long long seatIndex;
@property (weak, nonatomic) IESLiveBigPartyGuestInfoView *bigpartyGuestInfoView;
@property (weak, nonatomic) IESLiveBigPartyGuestInfoViewModel *bigPartyViewModel;
@property (weak, nonatomic) IESLiveAudioSeatView *audioSeatView;
@property (weak, nonatomic) IESLiveAudioSeatViewModel *audioSeatViewModel;
@property (weak, nonatomic) id<IESLiveInteractUserModel> userModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)layoutBaseUI;
- (void)dynamicUpdateItemInfo:(id)a0;
- (void)dynamicResetWithIds:(id)a0;
- (id)initWithScene:(unsigned long long)a0 room:(id)a1 index:(long long)a2 isPreview:(BOOL)a3;
- (void)loadAllConfigElements;
- (id)getElementWithDynamicItemId:(id)a0;
- (unsigned long long)p_getLoadRole;
- (unsigned long long)p_getLoadModule;
- (Class)p_elementClassForDefineExtra:(id)a0;
- (void)mountElements:(id)a0;
- (void)p_mountWithElement:(id)a0;
- (void)refreshDynamicItemInfo:(id)a0 userModel:(id)a1;
- (void)p_unmountWithElement:(id)a0;
- (void)unmountElements:(id)a0;
- (void)unmountAllElement;
- (void).cxx_destruct;
- (void)dealloc;
- (void)forwardInvocation:(id)a0;

@end
