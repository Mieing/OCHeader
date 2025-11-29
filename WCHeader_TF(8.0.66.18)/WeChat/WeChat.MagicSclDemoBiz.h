@interface WeChat.MagicSclDemoBiz : WeChat.MagicSclBaseBiz <IMBPkgManagement, IMBFileSystem> {
    void /* unknown type, empty encoding */ mbCommonAdapter;
    void /* unknown type, empty encoding */ bizPkg;
    void /* unknown type, empty encoding */ mbVConsoleHelper;
}

- (id)init;
- (void)start;
- (id)getParentViewController;
- (id)getAppId;
- (void)provideMainScript:(id /* block */)a0;
- (id)provideFileSystem;
- (id)getFileDataByPath:(id)a0;
- (id)readFile:(id)a0 position:(long long)a1 length:(long long)a2 error:(id *)a3;
- (void).cxx_destruct;

@end
