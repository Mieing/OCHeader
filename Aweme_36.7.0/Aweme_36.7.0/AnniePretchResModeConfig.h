@class NSString;

@interface AnniePretchResModeConfig : NSObject

@property (nonatomic) long long anniePrefetchResMode;
@property (nonatomic) BOOL needPreloadJs;
@property (copy, nonatomic) NSString *latchInitJs;
@property (copy, nonatomic) NSString *prefetchJs;

- (void).cxx_destruct;

@end
