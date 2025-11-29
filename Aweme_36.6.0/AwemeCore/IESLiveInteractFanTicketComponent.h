@class NSString, NSMutableSet, NSMutableDictionary;

@interface IESLiveInteractFanTicketComponent : IESLiveInteractComponentBase <IESLiveInteractFanTicketRouter, IESLiveInteractFanTicketDelegate, HTSLiveAudienceActions>

@property (retain, nonatomic) NSMutableSet *bizStores;
@property (retain, nonatomic) NSMutableDictionary *fanticketDict;
@property (retain, nonatomic) NSMutableDictionary *fanticketViewDict;
@property (retain, nonatomic) NSMutableDictionary *fanticketObserverDict;
@property (retain, nonatomic) NSMutableDictionary *gcdTimers;
@property (nonatomic) BOOL frequencyOptEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)liveDidPause;
- (void)liveDidContinue;
- (void)componentBindContext;
- (void)updateFanticket:(int)a0 fanticketDict:(id)a1;
- (void)removeFanticket:(int)a0;
- (void)removeFanticket:(int)a0 uid:(id)a1;
- (void)registerFanticketView:(id)a0 withUid:(id)a1;
- (void)unRegisterFanticketView:(id)a0 withUid:(id)a1;
- (void)registerObserver:(id /* block */)a0 withUid:(id)a1;
- (void)unRegisterObserverWithUid:(id)a0;
- (void)componentDidUpdatedGuestList:(id)a0;
- (void)componentDidChangedFromLayout:(id)a0 toLayout:(id)a1;
- (void)createBizStores;
- (void)addSettingListener;
- (void)renderFanticket:(id)a0 uid:(id)a1;
- (id)bizStoreClassGroup;
- (void)realRenderFanticket:(id)a0 uid:(id)a1;
- (void).cxx_destruct;

@end
