@interface WeChat.AudioFileBehaviorReporter : NSObject {
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ fileExt;
    void /* unknown type, empty encoding */ fileMD5;
    void /* unknown type, empty encoding */ msgSvrID;
    void /* unknown type, empty encoding */ chatName;
    void /* unknown type, empty encoding */ action;
}

- (id)initWithSource:(unsigned long long)a0 fileExt:(id)a1 fileMD5:(id)a2 msgSvrID:(long long)a3 chatName:(id)a4;
- (void)reportWithAction:(long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
