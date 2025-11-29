@class NSString;

@interface BDXBridgeOpenPoiPublishAwemeSessionMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *shootWay;
@property (retain, nonatomic) id publishParams;
@property (retain, nonatomic) id video;
@property (retain, nonatomic) id text;
@property (retain, nonatomic) id poiInfo;
@property (retain, nonatomic) id productInfo;
@property (retain, nonatomic) id trackParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
