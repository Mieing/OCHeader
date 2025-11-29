@interface AWENoticeSwiftImpl.InteractionNoticeNewMessageManager : NSObject {
    void /* unknown type, empty encoding */ _noticeUnreadCount;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataContext;
    void /* unknown type, empty encoding */ startReceivingNoticeTimestamp;
    void /* unknown type, empty encoding */ maxDisplayCount;
    void /* unknown type, empty encoding */ displayCount;
    void /* unknown type, empty encoding */ bubbleDelayTime;
    void /* unknown type, empty encoding */ isDisplaying;
    void /* unknown type, empty encoding */ $__lazy_storage_$_maxDisplayCountInSettings;
    void /* unknown type, empty encoding */ $__lazy_storage_$_showTime;
}

- (void)tryDisplay;
- (void)autoDismissBubbleAction;
- (void).cxx_destruct;
- (id)init;

@end
