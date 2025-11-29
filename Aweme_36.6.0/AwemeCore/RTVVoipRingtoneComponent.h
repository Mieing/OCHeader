@class NSString, NSMutableDictionary, RTVVoipSession, NSMutableArray;
@protocol RTVVoipRingtoneMusicModelProtocol, RTVUserProfileManagerInterface, RTVVoipRingtoneDetailPanelProtocol, RTVXRControllerInjector, RTVVoipStorageAreaInterface, RTVVoipRingtoneDownloadComponentInterface;

@interface RTVVoipRingtoneComponent : NSObject <RTVXRControllerInterface, RTVVoipSessionObserver, RTVVoipRingtoneComponentInterface>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (retain, nonatomic) NSMutableDictionary *userRingtoneMusicModelDic;
@property (retain, nonatomic) id<RTVVoipRingtoneMusicModelProtocol> currentUserRingtoneModel;
@property (readonly, nonatomic) id<RTVVoipStorageAreaInterface> storage;
@property (retain, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, weak, nonatomic) RTVVoipSession *voipSession;
@property (retain, nonatomic) id<RTVVoipRingtoneDetailPanelProtocol> detailPanel;
@property (retain, nonatomic) id<RTVVoipRingtoneDownloadComponentInterface> downloadComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMutableArray *ringtoneObserverList;

- (void)rtv_awakeFromControllerInjector;
- (BOOL)isVoipRingtoneHasBeenSet;
- (void)addRingtoneUpdateObserver:(id /* block */)a0;
- (void)removeRingtoneObserver:(id /* block */)a0;
- (void)showVoipRingtoneDetailPanelWithMusicId:(id)a0 enablePlay:(BOOL)a1 extra:(id)a2;
- (void)showVoipRingtonePickerWithExtra:(id)a0 dismissCompletion:(id /* block */)a1;
- (void)showVoipRingtoneHistoryPickerPanelWithExtra:(id)a0 dismissCompletion:(id /* block */)a1;
- (id)currentUserRingtoneCacheFileName;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (id)currentUserRingtoneMusicId;
- (id)currentUserRingtoneCacheFileName_v2;
- (void)updateCurrentUserRingtoneModel:(id)a0 updateServer:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)getUserRingtoneModelWithUid:(id)a0;
- (void)getRingtoneModelWithMusicId:(id)a0 withCompletion:(id /* block */)a1;
- (void)rtvSession:(id)a0 statusDidChangeTo:(long long)a1 fromStatus:(long long)a2;
- (id)getCurrentUserRingtoneModelFromCache;
- (void)callBackCurrentRingtonObserver;
- (BOOL)enableSendRingtoneGuideNoticeWhenPeerUserSet;
- (void)sendRingtoneGuideNoticeWithType:(unsigned long long)a0;
- (BOOL)enableSendRingtoneGuideNoticeWhenNobodySet;
- (void)updateUserRingtoneModel:(id)a0 userId:(id)a1 withCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
