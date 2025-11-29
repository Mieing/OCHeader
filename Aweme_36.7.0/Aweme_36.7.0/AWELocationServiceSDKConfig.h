@class NSString;

@interface AWELocationServiceSDKConfig : NSObject

@property (copy, nonatomic) NSString *baseURLString;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *countryView;
@property (nonatomic) BOOL oversea;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) id /* block */ personalRecommendIsOn;
@property (nonatomic) BOOL commonBoolValue;
@property (nonatomic) BOOL isChildMode;
@property (nonatomic) BOOL enableSubmitAfterRequestLocation;
@property (copy, nonatomic) id /* block */ coldLaunchTimestamp;
@property (nonatomic) long long launchType;
@property (nonatomic) long long backgroundLaunchType;

- (void).cxx_destruct;

@end
