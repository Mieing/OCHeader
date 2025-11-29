@class NSString;

@interface AWEAdGetAnchorInfoMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *downloadURL;
@property (copy, nonatomic) NSString *complianceData;
@property (copy, nonatomic) NSString *bundleBizID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
