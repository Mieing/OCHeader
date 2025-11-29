@interface IESLiveRevenueImpl.IESLiveRebornGiftPageViewModel : NSObject <IESLiveGiftPanelViewModelHelperDelegate, IESLiveRevenueImpl.IESLiveRebornGiftPanelTrackerReaction> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_displayExecutor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_giftPanelDataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataHelper;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sendHelper;
    void /* unknown type, empty encoding */ $__lazy_storage_$_redDotHelper;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imagePreloadHelper;
    void /* unknown type, empty encoding */ predictDict;
    void /* unknown type, empty encoding */ currentAIResortInfo;
    void /* unknown type, empty encoding */ fetchGiftListLogID;
    void /* unknown type, empty encoding */ currentGiftPagesCache;
    void /* unknown type, empty encoding */ giftStructCache;
    void /* unknown type, empty encoding */ giftItemCache;
    void /* unknown type, empty encoding */ resortDataLogModel;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ collectionVMs;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ defaultSelectData;
    void /* unknown type, empty encoding */ hasUserOperate;
    void /* unknown type, empty encoding */ edc;
    void /* unknown type, empty encoding */ targetRoom;
    void /* unknown type, empty encoding */ didFirstImageRender;
    void /* unknown type, empty encoding */ giftSendExtra;
    void /* unknown type, empty encoding */ setting;
    void /* unknown type, empty encoding */ defaultSelectIndexForTracker;
    void /* unknown type, empty encoding */ hasUpdateLatestGiftPanelData;
    void /* unknown type, empty encoding */ hasSelectFail;
    void /* unknown type, empty encoding */ hasTrackerShow;
}

- (void)hidePanel:(BOOL)a0;
- (void)updateLastTrackTimeGiftSendFirstTime:(id)a0;
- (void)updateTrackerParams:(id)a0;
- (void)didSetAttachingDIContext;
- (void).cxx_destruct;
- (id)init;

@end
