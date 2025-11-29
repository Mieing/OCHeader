@class IESLiveUnionLivePendantView, IESLiveUnionLiveNotificationView, NSString, IESLiveUnionLiveInfoStore;

@interface IESLiveUnionLiveInfoFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveToolbarComponentHandler>

@property (retain, nonatomic) IESLiveUnionLiveInfoStore *store;
@property (retain, nonatomic) IESLiveUnionLivePendantView *unionPendantView;
@property (retain, nonatomic) IESLiveUnionLiveNotificationView *notificationView;
@property (nonatomic) BOOL isReported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)toolbarComponentRemovedReason:(unsigned long long)a0 extra:(id)a1;
- (void)toolbarComponentUpdate:(id)a0;
- (void)trackAdShow;
- (void)updateUnionLivePendantVisible:(long long)a0;
- (id)creatUnionLiveItem;
- (void)openUnionPanel;
- (void)clickUnionTagEnterRoomOpenUnionPanel;
- (void)showNotificationView:(id)a0;
- (void)trackShowPendantView;
- (void)trackUnionLiveIcon:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
