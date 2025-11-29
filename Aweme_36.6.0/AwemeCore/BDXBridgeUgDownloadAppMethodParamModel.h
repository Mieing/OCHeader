@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeUgDownloadAppMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appName;
@property (nonatomic) BOOL shouldDownload;
@property (nonatomic) BOOL shouldPopup;
@property (retain, nonatomic) NSNumber *shouldQueryInstallStatus;
@property (retain, nonatomic) NSNumber *shouldShowPush;
@property (copy, nonatomic) NSString *pushURL;
@property (retain, nonatomic) NSNumber *shouldJumpApp;
@property (copy, nonatomic) NSString *appURL;
@property (copy, nonatomic) NSDictionary *ugRouteOutCustomsInfo;
@property (copy, nonatomic) NSDictionary *logExtra;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
