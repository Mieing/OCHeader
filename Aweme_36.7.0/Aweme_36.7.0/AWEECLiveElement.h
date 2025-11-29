@class NSString;

@interface AWEECLiveElement : AWEECPreLiveElement

@property (copy, nonatomic) NSString *mallLiveData;

+ (id)__lynx_prop_config__30215;
+ (id)__lynx_ui_method_config__31116;

- (void)enterDetail:(id)a0 withResult:(id /* block */)a1;
- (void)enterDetailWithParams:(id)a0 callBack:(id /* block */)a1;
- (void)livedata:(id)a0 requestReset:(BOOL)a1;
- (id)packageAwemeModelFromLiveData;
- (void).cxx_destruct;

@end
