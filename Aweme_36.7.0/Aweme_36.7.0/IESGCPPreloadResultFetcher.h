@class NSString;

@interface IESGCPPreloadResultFetcher : NSObject

@property (copy, nonatomic) NSString *preloadId;
@property (nonatomic) double timeout;
@property (copy, nonatomic) id /* block */ onResult;

- (void)notifyWithResult:(id)a0;
- (void).cxx_destruct;

@end
