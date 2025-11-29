@interface WeChat.WCFinderFeedFastSlipLogic : NSObject {
    void /* unknown type, empty encoding */ slipEventList;
    void /* unknown type, empty encoding */ lastEventTime;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fastSlipThreshold;
}

- (void)recordFeedSwitchFromContentVM:(id)a0 fromSection:(long long)a1 toSection:(long long)a2;
- (void)clearRecord;
- (unsigned long long)enhanceSlipTimes;
- (id)init;
- (void).cxx_destruct;

@end
