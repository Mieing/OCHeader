@class NSArray;

@interface AWEFeedSmartLoadmoreStrategyModel : NSObject

@property (copy, nonatomic) NSArray *plan;
@property (copy, nonatomic) NSArray *labelIndexMapping;
@property (nonatomic) long long defaultIndex;

- (void).cxx_destruct;
- (id)initWithJSONDict:(id)a0;

@end
