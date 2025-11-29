@interface WeChat.MBWeAppBootsPkgManagementBase : WeChat.MBPkgManagementBase {
    void /* unknown type, empty encoding */ pkgLogic;
    void /* unknown type, empty encoding */ debugInfo;
    void /* unknown type, empty encoding */ pkgChecker;
    void /* unknown type, empty encoding */ useDebugPackage;
    void /* unknown type, empty encoding */ useVConsole;
    void /* unknown type, empty encoding */ hasPrepare;
    void /* unknown type, empty encoding */ exptKey;
}

- (id)initWithInstanceName:(id)a0 hardcodeFileName:(id)a1 hardcodeMd5:(id)a2 hardcodeVersion:(id)a3 hardcodeSuffix:(id)a4 exptKey:(id)a5;
- (void)provideMainScript:(id /* block */)a0;
- (id)init;
- (id)initWithInstanceName:(id)a0;
- (void).cxx_destruct;

@end
