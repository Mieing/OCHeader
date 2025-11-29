@interface CSJAd : BUDynamicPlugin

+ (unsigned long long)instanceType;

- (void)callNativePhoneWithParam:(id)a0 callback:(id /* block */)a1 webView:(id)a2 controller:(id)a3;
- (void)getAddressWithParam:(id)a0 callback:(id /* block */)a1 webView:(id)a2 controller:(id)a3;

@end
