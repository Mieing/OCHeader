@interface WeChat.MagicWeAppCardPkgManager : NSObject <IMBPkgManagement, IMBFileSystem> {
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ pubResLogic;

- (id)provideFileSystem;
- (void)provideMainScript:(id /* block */)a0;
- (void)batchEvaluateScript:(id)a0 inContext:(id)a1 contextInfoMap:(id)a2;
- (id)readFile:(id)a0 position:(long long)a1 length:(long long)a2 error:(id *)a3;
- (id)getFileDataByPath:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
