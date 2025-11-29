@class NSDictionary;

@interface HMAggregateParam : NSObject

@property (nonatomic) long long fileSize;
@property (copy, nonatomic) NSDictionary *fileConfig;
@property (copy, nonatomic) NSDictionary *aggreIntoMax;

- (void).cxx_destruct;

@end
