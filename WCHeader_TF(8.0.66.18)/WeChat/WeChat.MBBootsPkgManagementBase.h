@interface WeChat.MBBootsPkgManagementBase : WeChat.MBPkgManagementBase {
    void /* unknown type, empty encoding */ $__lazy_storage_$_enableDebug;
    void /* unknown type, empty encoding */ $__lazy_storage_$_appConfig;
    void /* unknown type, empty encoding */ version;
}

- (void)provideMainScript:(id /* block */)a0;
- (id)initWithInstanceName:(id)a0;
- (id)provideFileSystem;
- (int)provideRemoteVersion;
- (id)getVersionInfo;
- (id)init;
- (void).cxx_destruct;

@end
