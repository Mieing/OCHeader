@interface IESGroupSettingActionCheckComponent : AWEIMComponentBase <IESGroupSettingActionCheckInterface> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_cacheKey;
    void /* unknown type, empty encoding */ actionCheckService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_conID;
}

- (void)hostVC_willDealloc;
- (void)componentDidMounted:(id)a0;
- (void)checkAction:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
