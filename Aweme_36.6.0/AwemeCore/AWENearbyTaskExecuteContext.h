@class NSDictionary, NSString;

@interface AWENearbyTaskExecuteContext : NSObject

@property (nonatomic) long long pageType;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSString *triggerSource;

- (id)initWithPageType:(long long)a0 triggerSource:(id)a1 data:(id)a2;
- (void).cxx_destruct;

@end
