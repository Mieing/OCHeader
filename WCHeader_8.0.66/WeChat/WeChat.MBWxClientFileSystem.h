@interface WeChat.MBWxClientFileSystem : NSObject <IMBFileSystem> {
    void /* unknown type, empty encoding */ mPrefix;
}

- (id)readFile:(id)a0 position:(long long)a1 length:(long long)a2 error:(id *)a3;
- (BOOL)accept:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
