@class NSString, NSDictionary;

@interface TingRouteInfo : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *arguments;
@property (nonatomic) BOOL enableMiniprogram;

- (void).cxx_destruct;

@end
