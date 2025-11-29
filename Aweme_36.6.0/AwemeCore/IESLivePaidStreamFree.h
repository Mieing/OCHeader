@class NSMutableDictionary, NSString, IESLivePaidFreeAPI, NSHashTable, PaidLiveShareTicketResponse_PaidLiveShareTicketData, IESLivePaidFreeConfig;

@interface IESLivePaidStreamFree : NSObject <IESLivePaidFree>

@property (retain, nonatomic) NSHashTable *freeEventHandlers;
@property (retain, nonatomic) IESLivePaidFreeAPI *api;
@property (retain, nonatomic) IESLivePaidFreeConfig *config;
@property (nonatomic, getter=isOpenedGrabPanel) BOOL openedGrabPanel;
@property (retain, nonatomic) PaidLiveShareTicketResponse_PaidLiveShareTicketData *freeData;
@property (retain, nonatomic) NSMutableDictionary *subscribers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEventDidEndDisplayGrabFreeView;
- (void)sendEventGrabFreeSucceed:(BOOL)a0;
- (void)sendEventToHandlers:(SEL)a0 event:(id /* block */)a1;
- (void)registerFreeEventHandler:(id)a0;
- (void)unregisterFreeEventHandler:(id)a0;
- (void)getFreeInfoWithPaidScene:(long long)a0 paidChannel:(long long)a1 completion:(id /* block */)a2;
- (id)currentFreeInfo;
- (void)openGrabFreeViewWithUrlParams:(id)a0 paidScene:(long long)a1 paidChannel:(long long)a2;
- (id)registeredFreeEventHandlers;
- (void)sendEventWillDisplayGrabFreeView;
- (void)sendEventDidDisplayGrabFreeView:(id)a0;
- (void)unSubscribeGrabEvents;
- (void)subscribeGrabEvents;
- (void)grabPanelNotification:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
