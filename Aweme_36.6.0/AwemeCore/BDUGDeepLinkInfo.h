@class NSArray, BDUGDeepLinkCustomizedLinkModel, NSString;

@interface BDUGDeepLinkInfo : NSObject

@property (nonatomic) long long maxATTWaitTime;
@property (nonatomic) long long appID;
@property (copy, nonatomic) id /* block */ did;
@property (copy, nonatomic) id /* block */ iid;
@property (copy, nonatomic) NSArray *schemes;
@property (nonatomic) BOOL enableUrlDecode;
@property (retain, nonatomic) BDUGDeepLinkCustomizedLinkModel *customizedModel;
@property (retain, nonatomic) NSString *settingDomain;
@property (nonatomic) BOOL enableSettingsRequestOptimize;
@property (nonatomic) BOOL disableLaunchEventReportOnDeeplink;

- (void).cxx_destruct;
- (id)init;

@end
