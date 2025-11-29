@class IESLiveInteractiveDegradeState, NSArray, NSMutableDictionary, NSString, IESLiveInteractiveAPI, RACCompoundDisposable;

@interface IESLiveInteractiveDegraderImp : NSObject <IESLiveSocialInteractPreLoadExAction, HTSLiveMessageSubscriber, IESLiveInteractiveDegrader>

@property (retain, nonatomic) IESLiveInteractiveDegradeState *state;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSArray *settingList;
@property (retain, nonatomic) NSMutableDictionary *itemsMap;
@property (retain, nonatomic) RACCompoundDisposable *joinChannelDisposable;
@property (retain, nonatomic) IESLiveInteractiveAPI *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)interactionModeStartedWithLayout:(id)a0;
- (void)didJoinChannelWithLayout:(id)a0;
- (void)didLeaveChannelWithLayout:(id)a0;
- (BOOL)isBlocking:(id)a0;
- (id)addObserver:(id)a0 degrade:(id /* block */)a1;
- (id)addObserver:(id)a0 degrade:(id /* block */)a1 upgrade:(id /* block */)a2;
- (id)addObserver:(id)a0 degrade:(id /* block */)a1 upgrade:(id /* block */)a2 remoteAction:(id /* block */)a3;
- (void)sendSyncRequest:(id)a0 params:(id)a1;
- (void)monitorBigEventDegrade:(id)a0 params:(id)a1;
- (void)stopOthersConnection:(id)a0;
- (void)didChangedPerfDegradeLevel:(long long)a0;
- (BOOL)triggerActionForItems:(id)a0;
- (BOOL)performRepeatTrigger:(id)a0;
- (BOOL)performDegrade:(id)a0;
- (BOOL)performUpgrade:(id)a0;
- (void)monitorEvent:(id)a0 params:(id)a1;
- (BOOL)perfromClear:(id)a0;
- (void)registerJoinChannelAlertDegradeObserver;
- (BOOL)isBigParty;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isAnchor;
- (void)stopConnection;
- (id)itemForKey:(id)a0;
- (void)messageReceived:(id)a0;

@end
