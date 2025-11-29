@class NSNumber, NSString;

@interface BDXBridgeGetDesktopGuideDataMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *code;
@property (copy, nonatomic) NSString *installType;
@property (copy, nonatomic) NSString *installName;
@property (copy, nonatomic) NSString *installStyleType;
@property (copy, nonatomic) NSString *rawData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
