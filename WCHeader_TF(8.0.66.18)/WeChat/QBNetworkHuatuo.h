@class NSArray, NSMutableArray;

@interface QBNetworkHuatuo : NSObject {
    NSArray *_urlStringArray;
    NSMutableArray *_QBSpeedItemArray;
    unsigned long long _totalCount;
    unsigned long long _finishedCount;
    id /* block */ _completionBlock;
}

- (id)init;
- (void)startWithCompletion:(id /* block */)a0;
- (void)_start;
- (void)finishRecord;
- (void)cancel;
- (void).cxx_destruct;

@end
