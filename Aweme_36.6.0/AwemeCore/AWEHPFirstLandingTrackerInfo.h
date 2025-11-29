@class NSString, NSDictionary;

@interface AWEHPFirstLandingTrackerInfo : NSObject

@property (retain, nonatomic) NSString *tabID;
@property (retain, nonatomic) NSString *topTabID;
@property (retain, nonatomic) NSString *bottomTabID;
@property (nonatomic) double durationSinceLaunch;
@property (retain, nonatomic) NSString *callerId;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSDictionary *extraInfo;

- (void).cxx_destruct;

@end
