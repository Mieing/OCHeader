@class NSString, BDXBridgePoiLocationServiceServiceRequestAlertConfig, BDXBridgePoiLocationServiceAuthRequestAlertConfig, BDXBridgePoiLocationServiceAuthRequestBottomBarConfig, NSNumber;

@interface BDXBridgePoiLocationServiceMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSNumber *ignoreAlertInterval;
@property (copy, nonatomic) NSString *extraReportParams;
@property (retain, nonatomic) NSNumber *dialogStyle;
@property (copy, nonatomic) NSString *bid;
@property (copy, nonatomic) NSString *containerID;
@property (retain, nonatomic) BDXBridgePoiLocationServiceServiceRequestAlertConfig *serviceRequestAlertConfig;
@property (retain, nonatomic) BDXBridgePoiLocationServiceAuthRequestAlertConfig *authRequestAlertConfig;
@property (retain, nonatomic) BDXBridgePoiLocationServiceAuthRequestBottomBarConfig *authRequestBottomBarConfig;

+ (id)requiredKeyPaths;
+ (id)serviceRequestAlertConfigJSONTransformer;
+ (id)authRequestAlertConfigJSONTransformer;
+ (id)authRequestBottomBarConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
