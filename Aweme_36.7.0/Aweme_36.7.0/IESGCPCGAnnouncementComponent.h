@class NSArray, NSMutableDictionary, IESGCPCGAnnouncementStore, BDXBridgeEventSubscriber, IESGCPCGAnnouncementLynxView, NSString;

@interface IESGCPCGAnnouncementComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceActions, IESGCPCGAnnouncementRouter, IESGCPCGLaunchProcessActions>

@property (retain, nonatomic) IESGCPCGAnnouncementStore *store;
@property (retain, nonatomic) IESGCPCGAnnouncementLynxView *announcementLynxView;
@property (retain, nonatomic) BDXBridgeEventSubscriber *annSubscriber;
@property (retain, nonatomic) NSArray *announceArray;
@property (retain, nonatomic) NSArray *announceGameArray;
@property (retain, nonatomic) NSArray *announceGameDelayArray;
@property (retain, nonatomic) NSArray *announceGameBusinessArray;
@property (retain, nonatomic) NSMutableDictionary *announceLynxQueryItems;
@property (retain, nonatomic) NSArray *announceBusinessJsonArray;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL hasFirstFrameGamePopup;
@property (nonatomic) BOOL isInitShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (void)playInstanceOnFirstFrameReceived:(id)a0 info:(id)a1;
- (void)onInitProcessResult:(BOOL)a0 code:(long long)a1 errMsg:(id)a2 extraInfo:(id)a3;
- (void)componentDidAttached;
- (void)_registerAnnouncementEventSubscriber;
- (void)dismissAnnouncementDialog;
- (void)popupBusinessGameAnnouncement:(id)a0;
- (BOOL)shouldShowAnnouncementDialog;
- (void)_unRegisterShowToastEventSubscriber;
- (id)parseAnnouncementsFromArray:(id)a0 withParser:(id /* block */)a1;
- (void)handleGamePopupFromJSON:(id)a0;
- (void)showAnnouncementPopupIfNeeded;
- (id)findAnnouncementWithID:(id)a0 inArray:(id)a1;
- (void)showGamePopup:(id)a0;
- (void)trackAnnouncementViewBusinessShowWithPopupId:(id)a0;
- (void)updateCacheForPopup:(id)a0 PopupType:(id)a1;
- (void)sortAnnouncementPopupArrayByPriority;
- (void)handleAnnouncementPopup;
- (void)handleAnnouncementGamePopup;
- (void)showAnnouncementLynxDialog;
- (id)sortedArray:(id)a0;
- (BOOL)shouldShowAnnouncementPopupWith:(id)a0;
- (void)filterAnnouncementsWithID:(id)a0 fromArray:(id)a1;
- (void)removeAnnouncementsOfType:(long long)a0 fromArray:(id)a1;
- (id)parseAnnouncementGamePopupFromJSON:(id)a0;
- (void)trackAnnouncementViewClickWithButtonType:(id)a0 popupId:(id)a1;
- (void)trackAnnouncementViewShowWithPopupId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
