@class NSOperationQueue, NSMutableDictionary;

@interface CJPayDNSPrefetcher : NSObject

@property (retain, nonatomic) NSOperationQueue *opQueue;
@property (retain, nonatomic) NSMutableDictionary *pendingResolveHostDict;

+ (id)shareInstance;

- (void)cancelAllResolve;
- (void).cxx_destruct;
- (void)resolve:(id)a0;
- (id)init;

@end
