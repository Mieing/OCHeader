@class AWEIMMessageRedPackageMangoPetElfConfig, AWEIMMessageRedPackageMangoRouteConfig, AWEIMMessageRedPackageMangoVenueConfig;

@interface AWEIMMessageRedPackageMangoConfig : NSObject

@property (retain, nonatomic) AWEIMMessageRedPackageMangoVenueConfig *venueConfig;
@property (retain, nonatomic) AWEIMMessageRedPackageMangoRouteConfig *routeConfig;
@property (retain, nonatomic) AWEIMMessageRedPackageMangoPetElfConfig *petElfConfig;

+ (id)sharedConfig;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
