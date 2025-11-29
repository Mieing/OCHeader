@class NSOperationQueue;

@interface CSJWebViewLoadManager : NSObject

@property (retain, nonatomic) NSOperationQueue *operationQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
