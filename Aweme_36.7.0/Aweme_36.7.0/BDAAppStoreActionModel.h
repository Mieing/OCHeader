@class NSString, NSDictionary;

@interface BDAAppStoreActionModel : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *creativeId;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *skAdNetworkParams;
@property (copy, nonatomic) NSDictionary *businessIdentifyInfo;
@property (nonatomic) long long downloadScene;
@property (copy, nonatomic) NSDictionary *complianceData;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) id /* block */ complianceCompletion;
@property (copy, nonatomic) NSString *downloadUrl;
@property (copy, nonatomic) NSDictionary *trackExtra;
@property (retain, nonatomic) NSString *scene;

- (void).cxx_destruct;

@end
