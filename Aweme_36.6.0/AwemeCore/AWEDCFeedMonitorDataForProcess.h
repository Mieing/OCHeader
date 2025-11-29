@class NSMutableDictionary;

@interface AWEDCFeedMonitorDataForProcess : NSObject {
    double beginTime;
    NSMutableDictionary *extraParams;
    NSMutableDictionary *commonParams;
    BOOL needSub;
    NSMutableDictionary *subDict;
}

- (void).cxx_destruct;
- (id)init;

@end
