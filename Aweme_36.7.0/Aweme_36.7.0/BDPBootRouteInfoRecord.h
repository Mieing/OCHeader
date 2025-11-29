@class NSString;

@interface BDPBootRouteInfoRecord : NSObject

@property (retain, nonatomic) NSString *routeID;
@property (nonatomic) BOOL needReportLaunchLCP;
@property (nonatomic) BOOL needReportLaunchFP;
@property (nonatomic) long long routeCount;

- (void).cxx_destruct;
- (id)initWithRouteID:(id)a0;

@end
