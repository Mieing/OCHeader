@class AWESECPageInterest, AWESECRouteInterest;

@interface AWESECInterests : NSObject

@property (retain, nonatomic) AWESECPageInterest *pageInterest;
@property (retain, nonatomic) AWESECRouteInterest *routeInterest;

+ (id)shared;
+ (void)setup;

- (void).cxx_destruct;
- (void)setup;

@end
