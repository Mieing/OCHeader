@interface StoreEmoticonSearchPlugin : WSWebViewPluginBase

@property (nonatomic) unsigned long long scene;

- (id)initWithScene:(unsigned long long)a0;
- (void)handleEvent:(id)a0 userInfo:(id)a1;
- (void)parserCommand:(id)a0;

@end
