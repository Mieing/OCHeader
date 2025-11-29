@class NSString, NSDictionary;

@interface GameLaunchReportInfo : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSDictionary *channelReportExtInfo;
@property (nonatomic) BOOL useInstallUrl;

+ (id)reportInfoWithAppId:(id)a0;

- (void).cxx_destruct;

@end
