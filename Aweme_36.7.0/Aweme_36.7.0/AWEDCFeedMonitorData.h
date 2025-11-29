@class NSMutableDictionary;

@interface AWEDCFeedMonitorData : NSObject {
    double allTime;
    unsigned long long allCount;
    BOOL isSub;
    NSMutableDictionary *subDataDict;
}

- (void).cxx_destruct;
- (id)init;

@end
