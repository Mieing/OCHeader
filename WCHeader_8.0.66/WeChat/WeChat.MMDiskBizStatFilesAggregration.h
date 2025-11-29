@interface WeChat.MMDiskBizStatFilesAggregration : NSObject {
    void /* unknown type, empty encoding */ biz;
    void /* unknown type, empty encoding */ folder;
    void /* unknown type, empty encoding */ biggestFiles;
    void /* unknown type, empty encoding */ latestFiles;
}

- (id)initWithBiz:(long long)a0 folder:(id)a1;
- (void)addIfNeededWithName:(id)a0 size:(long long)a1 latestTimeInterval:(double)a2;
- (void)report;
- (id)init;
- (void).cxx_destruct;

@end
