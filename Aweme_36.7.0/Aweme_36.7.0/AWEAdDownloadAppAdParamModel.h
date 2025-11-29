@class NSString, NSNumber, NSDictionary;

@interface AWEAdDownloadAppAdParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSNumber *preloadWeb;
@property (copy, nonatomic) NSString *downloadURL;
@property (nonatomic) BOOL appStoreEnabled;
@property (nonatomic) BOOL appStoreReuseDisabled;
@property (copy, nonatomic) NSString *SKANParameters;
@property (copy, nonatomic) NSString *openURL;
@property (retain, nonatomic) NSNumber *downloadScene;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *complianceData;
@property (retain, nonatomic) NSDictionary *extraLogInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
