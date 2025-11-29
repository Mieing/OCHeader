@interface AWEECOMIMChatListTopDynamicCardCommonFunctionImp : AWEECOMIMDynamicCardCommonFunctionImp

+ (id)sharedInstance;

- (id)templateCardModleResourceDirectoryPath;
- (void)fetchCDNResourceAsyncWithJsonName:(id)a0 completion:(id /* block */)a1;
- (id)remoteConfig;

@end
