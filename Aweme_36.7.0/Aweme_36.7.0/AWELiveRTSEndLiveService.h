@interface AWELiveRTSEndLiveService : AWELiveSwiftImpl.RtsJsonUtils {
    void /* unknown type, empty encoding */ kIESLiveNewFinishViewCrossTitleUpdated;
    void /* unknown type, empty encoding */ responseData;
    void /* unknown type, empty encoding */ responseRoomService;
    void /* unknown type, empty encoding */ responseGuideData;
    void /* unknown type, empty encoding */ loading;
    void /* unknown type, empty encoding */ performanceLogger;
    void /* unknown type, empty encoding */ xTabReloadCallback;
    void /* unknown type, empty encoding */ callbackResponse;
    void /* unknown type, empty encoding */ callbackVipTitleChanged;
    void /* unknown type, empty encoding */ visibleCallback;
    void /* unknown type, empty encoding */ retainCallback;
    void /* unknown type, empty encoding */ tryToRetain;
    void /* unknown type, empty encoding */ newCountTime;
    void /* unknown type, empty encoding */ api;
    void /* unknown type, empty encoding */ afterLiveAudienceHandler;
}

- (void)handleAppEnterForeground;
- (void)handleAppEnterBackground;
- (void)handleSubscribeVIPLiveTitleUpdatedWithNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
