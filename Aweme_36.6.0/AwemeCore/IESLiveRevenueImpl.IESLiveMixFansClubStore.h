@class HTSLiveUser_FansClub;

@interface IESLiveRevenueImpl.IESLiveMixFansClubStore : NSObject <IESLiveMixFansGroupSwiftRouter, HTSLiveMessageSubscriber, IESHYControllerDelegate> {
    void /* unknown type, empty encoding */ roomModel;
    void /* unknown type, empty encoding */ trackContext;
    void /* unknown type, empty encoding */ componentContext;
    void /* unknown type, empty encoding */ roomDataReady;
    void /* unknown type, empty encoding */ isFans;
    void /* unknown type, empty encoding */ fansClubUrl;
    void /* unknown type, empty encoding */ fansClubEntryInfo;
    void /* unknown type, empty encoding */ userFansClubStatus;
    void /* unknown type, empty encoding */ disposable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fansClubApi;
    void /* unknown type, empty encoding */ completions;
    void /* unknown type, empty encoding */ fansClubTraceUtils;
    void /* unknown type, empty encoding */ ecomFansClubUrl;
    void /* unknown type, empty encoding */ enableEcomFansclub;
    void /* unknown type, empty encoding */ lastOpenTimeStr;
    void /* unknown type, empty encoding */ isFirstOpen;
    void /* unknown type, empty encoding */ fansclubClientRollBackEnable;
    void /* unknown type, empty encoding */ isAnchor;
}

@property (nonatomic, retain) HTSLiveUser_FansClub *userFansClubInfo;

- (void)didSetAttachingDIContext;
- (BOOL)isFansOfRoom;
- (void)requestFansClubEntryInfoWithSource:(unsigned long long)a0;
- (void)openFansGroupViewWithTrackType:(unsigned long long)a0 sourceType:(unsigned long long)a1;
- (void)openFansGroupViewWithTrackType:(unsigned long long)a0 sourceType:(unsigned long long)a1 isSubscribeTab:(BOOL)a2;
- (void)openFansGroupViewWithTrackType:(unsigned long long)a0;
- (void)openFansGroupViewWithMessage:(id)a0 TrackType:(unsigned long long)a1;
- (BOOL)isShowGiftPanelFansClubBar;
- (id)currentFansclubEntryInfo;
- (void)currentFansclubEntryInfo:(id /* block */)a0;
- (id)currentGuardInfo;
- (BOOL)enableFansclubGiftPanelIncentiveGuide;
- (void)openEcomFansGroupView;
- (int)fansClubStatus;
- (void)vs_openFansGroupViewWithTrackType:(unsigned long long)a0;
- (void)iesHYController:(id)a0 didFinishLoadWithError:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
