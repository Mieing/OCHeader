@class _TtC7BDADSDK9ADManager;

@interface BDADSDK.ADManager : NSObject <BDADSDK.BasicAbilityDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_baseImpl;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sdkImpl;
}

@property (class, nonatomic, readonly) _TtC7BDADSDK9ADManager *shared;

- (id)requestForBinaryFrom:(id)a0 params:(id)a1 method:(long long)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 priority:(long long)a5 requestSerializer:(Class)a6 responseSerializer:(Class)a7 completion:(id /* block */)a8;
- (id)requestForJsonFrom:(id)a0 params:(id)a1 method:(long long)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 priority:(long long)a5 requestSerializer:(Class)a6 responseSerializer:(Class)a7 completion:(id /* block */)a8;
- (BOOL)trackAdEvent:(id)a0 tag:(id)a1 extra:(id)a2 adExtra:(id)a3;
- (BOOL)trackURLs:(id)a0 trackLabel:(id)a1 cid:(id)a2 extraData:(id)a3 logExtra:(id)a4;
- (BOOL)monitor:(id)a0 value:(id)a1 category:(id)a2 extra:(id)a3;
- (BOOL)trackEvent:(id)a0 extra:(id)a1;
- (BOOL)trackLog:(id)a0 tag:(id)a1 level:(long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
