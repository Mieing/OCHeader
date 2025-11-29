@interface LMImageQualityFileWatcherConfig : NSObject {
    void /* unknown type, empty encoding */ whiteList;
    void /* unknown type, empty encoding */ blockList;
    void /* unknown type, empty encoding */ filePath;
    void /* unknown type, empty encoding */ fileList;
    void /* unknown type, empty encoding */ fileWatcher;
}

@property (nonatomic, readonly) long long hash;

- (id)initWithPath:(id)a0 whiteList:(id)a1 blockList:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
