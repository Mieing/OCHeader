@class NSString, NSDictionary;
@protocol BDUGCertProtocol;

@interface BDUGLocationInitConfig : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *baseURLString;
@property (copy, nonatomic) id /* block */ coldLaunchTimestamp;
@property (nonatomic) long long launchType;
@property (nonatomic) long long backgroundLaunchType;
@property (copy, nonatomic) id /* block */ restrictMode;
@property (copy, nonatomic) id /* block */ removeRemoteLocationData;
@property (retain, nonatomic) id<BDUGCertProtocol> cert;
@property (retain, nonatomic) NSDictionary *certDict;
@property (nonatomic) long long headingOrientation;
@property (copy, nonatomic) id /* block */ language;
@property (copy, nonatomic) NSString *countryView;
@property (retain, nonatomic) NSDictionary *defaultSettings;
@property (copy, nonatomic) id /* block */ personalRecommendIsOn;

- (id)initWithAppID:(id)a0 deviceID:(id)a1 baseURLString:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
