@class NSString, NSDictionary;

@interface IESLatchUrlJSData : NSObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *initilizeJSString;
@property (copy, nonatomic) NSString *prefetchJSString;
@property (copy, nonatomic) NSDictionary *routerParam;
@property (nonatomic) unsigned long long prefetchFrom;

- (void).cxx_destruct;

@end
