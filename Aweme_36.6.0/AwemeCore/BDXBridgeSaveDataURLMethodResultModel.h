@class NSString;

@interface BDXBridgeSaveDataURLMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *relativeFilePath;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
