@class NSString;

@interface AmoebaRouteRule : NSObject

@property (nonatomic) unsigned long long routeType;
@property (nonatomic) unsigned long long routeRule;
@property (nonatomic) BOOL isRtReport;
@property (nonatomic) BOOL isBatchReport;
@property (copy, nonatomic) id /* block */ callbackBlock;
@property (retain, nonatomic) NSString *callbackKey;

- (id)toString;
- (void).cxx_destruct;

@end
