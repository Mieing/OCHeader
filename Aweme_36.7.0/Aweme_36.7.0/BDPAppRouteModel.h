@class NSString, BDPAppPageURL;

@interface BDPAppRouteModel : NSObject

@property (retain, nonatomic) BDPAppPageURL *routeUrl;
@property (copy, nonatomic) NSString *routeAct;
@property (copy, nonatomic) NSString *routeID;
@property (nonatomic) unsigned long long routeType;
@property (nonatomic) unsigned long long routeSource;
@property (copy, nonatomic) NSString *preRouteID;

- (void).cxx_destruct;

@end
