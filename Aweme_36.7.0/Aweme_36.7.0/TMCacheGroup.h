@class NSArray, NSString, NSDictionary;

@interface TMCacheGroup : NSObject

@property (retain, nonatomic) NSArray *apis;
@property (retain, nonatomic) NSString *store;
@property (retain, nonatomic) NSString *strategy;
@property (retain, nonatomic) NSDictionary *params;

- (void).cxx_destruct;

@end
