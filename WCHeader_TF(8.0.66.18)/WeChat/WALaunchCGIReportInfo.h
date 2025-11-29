@class NSString;

@interface WALaunchCGIReportInfo : NSObject

@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int debugType;
@property (nonatomic) long long beginTime;
@property (nonatomic) unsigned int appVersion;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int appServiceType;
@property (nonatomic) unsigned int requestType;
@property (copy, nonatomic) NSString *username;

- (void).cxx_destruct;

@end
