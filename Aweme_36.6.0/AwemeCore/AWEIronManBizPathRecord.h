@class NSString, NSArray, NSDictionary, AWEIronManBizPathConfig;

@interface AWEIronManBizPathRecord : NSObject

@property (copy, nonatomic) NSString *bizPathName;
@property (copy, nonatomic) NSString *routeId;
@property (retain, nonatomic) NSArray *bizStages;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) NSDictionary *firstStageEventParams;
@property (retain, nonatomic) AWEIronManBizPathConfig *pathConfig;
@property (nonatomic) double expiredTime;

- (id)trackParams;
- (void).cxx_destruct;

@end
