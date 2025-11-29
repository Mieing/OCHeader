@class NSString, NSNumber;

@interface BDXBridgeStudioChooseAndExtractPicLocationPicInfos : BDXBridgeModel

@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
