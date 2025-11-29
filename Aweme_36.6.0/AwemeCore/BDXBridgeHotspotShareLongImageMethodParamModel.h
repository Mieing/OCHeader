@class NSNumber, NSString;

@interface BDXBridgeHotspotShareLongImageMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *shareSchemaType;
@property (copy, nonatomic) NSString *shareId;
@property (copy, nonatomic) NSString *commandPlaceholder;
@property (copy, nonatomic) NSString *shareScene;
@property (nonatomic) BOOL isShowBuildImage;
@property (copy, nonatomic) NSString *longImageSchema;
@property (copy, nonatomic) NSString *longImageRequestUrl;
@property (copy, nonatomic) NSString *longImageRequestQuery;
@property (copy, nonatomic) NSString *shareThumbImage;
@property (retain, nonatomic) NSNumber *imMsgType;
@property (copy, nonatomic) NSString *imMsgContent;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSNumber *enablePreload;
@property (retain, nonatomic) NSNumber *enablePrefetch;
@property (retain, nonatomic) NSNumber *timeoutThreshold;
@property (copy, nonatomic) NSString *qrCodeRequestParams;
@property (copy, nonatomic) NSString *qrCodeSize;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
