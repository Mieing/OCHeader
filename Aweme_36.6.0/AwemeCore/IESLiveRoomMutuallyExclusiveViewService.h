@class NSString, IESLiveMutuallyExclusiveViewItem;
@protocol IESLiveMutuallyExclusiveViewProtocol;

@interface IESLiveRoomMutuallyExclusiveViewService : IESLiveGeneralBaseService <IESLiveMutuallyExclusiveViewInterface, HTSLiveAudienceActions>

@property (retain, nonatomic) id<IESLiveMutuallyExclusiveViewProtocol> manager;
@property (retain, nonatomic) IESLiveMutuallyExclusiveViewItem *currentPopupItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)serviceDidLaunch;
- (void)addItem:(id)a0 priority:(long long)a1;
- (void)liveComponentDidLoaded;
- (void)observePopupItem;
- (void)observePopupContainerSubviewsChange;
- (void)registerGraph;
- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (void)removeItem:(id)a0;
- (void)removeItemWithIdentifier:(id)a0;

@end
