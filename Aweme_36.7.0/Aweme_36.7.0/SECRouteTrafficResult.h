@class NSError, NSString;

@interface SECRouteTrafficResult : NSObject

@property (retain, nonatomic) NSError *interrupt;
@property (copy, nonatomic) NSString *originTrafficURL;
@property (copy, nonatomic) NSString *safeTrafficURL;

+ (id)safeResultWith:(id)a0;
+ (id)blockResultWith:(id)a0;

- (void).cxx_destruct;

@end
