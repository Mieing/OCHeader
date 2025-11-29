@class NSString, NSDictionary;

@interface MMWebPrefetchInjectResInfo : MMObject

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSDictionary *respHeaderFields;

- (void).cxx_destruct;

@end
