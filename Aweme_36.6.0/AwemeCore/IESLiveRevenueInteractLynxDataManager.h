@class IESLiveRevenueInteractLynxDataModel, IESLiveRevenueInteractLynxPlayModel, IESLiveRevenueInteractLynxInteractModel, NSString, IESLiveRevenueInteractLynxDataDispatcher;

@interface IESLiveRevenueInteractLynxDataManager : NSObject <IESLiveRevenueInteractInnerAction, IESLivePKStateAction, IESLiveRevenueInteractPlayStateAction, IESLiveInteractiveUserServiceDelegate, HTSLiveStreamPlayerAction, IESLiveRevenueInteractLynxDataService>

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) IESLiveRevenueInteractLynxDataModel *dataModel;
@property (retain, nonatomic) IESLiveRevenueInteractLynxDataDispatcher *dataDispatcher;
@property (retain, nonatomic) IESLiveRevenueInteractLynxPlayModel *oldLynxPlayModel;
@property (retain, nonatomic) IESLiveRevenueInteractLynxInteractModel *oldLynxInteractModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)handleClearNotification:(id)a0;
- (void)playerFrameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didChangePKStateFrom:(long long)a0 to:(long long)a1;
- (void)didChangeStateFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (id)mLinkerProvider;
- (void)multiLinkerUserService:(id)a0 didInteractiveListUpdated:(id)a1;
- (void)multiLinkerUserService:(id)a0 didCurrentRoomInteractListUpdated:(id)a1 oppositeRoomInteractListUpdated:(id)a2;
- (id)interactProvider;
- (id)getAnchorLinkInfo:(id)a0;
- (id)getAnchorPKInfo:(id)a0;
- (id)initWithDIContext:(id)a0 scene:(unsigned long long)a1;
- (id)getRevenueInteractData:(id)a0;
- (id)getRevenueInteractDataByTag:(id)a0;
- (id)pkProvider;
- (void)setInteractDataObservers;
- (void)setPlayDataObservers;
- (void)initOldDataModel;
- (void)sendDataWithTag:(id)a0;
- (void)sendDataWithUiLayoutUpdateWithTag:(id)a0;
- (void)updateLynxState;
- (BOOL)checkInvalidLynxEvent:(id)a0;
- (id)getAnchorData:(id)a0;
- (void)updateLynxState:(BOOL)a0;
- (long long)currentLynxPlayState;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
