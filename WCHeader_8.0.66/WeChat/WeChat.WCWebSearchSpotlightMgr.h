@class NSString;

@interface WeChat.WCWebSearchSpotlightMgr : MMUserService <MMServiceProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_queue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lock;
}

@property (class, nonatomic, readonly) NSString *prefix;

- (void)onServiceClearData;
- (id)init;
- (void).cxx_destruct;

@end
