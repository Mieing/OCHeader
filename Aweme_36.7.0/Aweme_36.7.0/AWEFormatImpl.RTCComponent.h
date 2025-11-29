@interface AWEFormatImpl.RTCComponent : AWEFormatImpl.BaseComponent <AFDMuteAwemeMessage> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_rtcClientManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playerItem;
    void /* unknown type, empty encoding */ isFirstConnect;
    void /* unknown type, empty encoding */ isResumeing;
    void /* unknown type, empty encoding */ rtcRenderView;
    void /* unknown type, empty encoding */ hasShowInFeed;
    void /* unknown type, empty encoding */ hasPaused;
    void /* unknown type, empty encoding */ isInnerFirstAppear;
    void /* unknown type, empty encoding */ isAppear;
    void /* unknown type, empty encoding */ isEnterBackground;
    void /* unknown type, empty encoding */ autoResumeCount;
    void /* unknown type, empty encoding */ liveMsgResendCache;
    void /* unknown type, empty encoding */ audioDelegate;
}

- (void)muteAwemeMessage;
- (void)muteAwemeCanceled;

@end
