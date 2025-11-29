@class NSString;

@interface WCPayBalanceLQTOpenInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *openInfo;
@property (retain, nonatomic) NSString *openUrl;
@property (nonatomic) int routeType;
@property (retain, nonatomic) NSString *appName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_openInfo;
+ (void)PBArrayAdd_openUrl;
+ (void)PBArrayAdd_routeType;
+ (void)PBArrayAdd_appName;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
