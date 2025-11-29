@interface WeChat.MBPkgManagementBase : NSObject <IMBPkgManagement> {
    void /* unknown type, empty encoding */ fs;
    void /* unknown type, empty encoding */ _instanceName;
    void /* unknown type, empty encoding */ _lowerBizName;
    void /* unknown type, empty encoding */ wxaPkgPath;
}

- (void)provideMainScript:(id /* block */)a0;
- (id)init;
- (id)initWithInstanceName:(id)a0;
- (id)provideFileSystem;
- (void)destory;
- (void).cxx_destruct;

@end
