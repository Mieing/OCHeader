@class NSDictionary;

@interface VCStrategyMediaUrlItem : NSObject

@property (copy, nonatomic) NSDictionary *info;
@property (copy, nonatomic) id /* block */ preloadEnd;
@property (copy, nonatomic) id /* block */ preloadCanceled;
@property (copy, nonatomic) id /* block */ preloadDidStart;
@property (copy, nonatomic) id /* block */ preloadProgress;

- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;

@end
