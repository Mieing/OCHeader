@class NSNumber, NSString, NSDictionary;

@interface BDXBridgeCheckDesktopGuideCanShowMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *canShow;
@property (copy, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSDictionary *outputParams;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
