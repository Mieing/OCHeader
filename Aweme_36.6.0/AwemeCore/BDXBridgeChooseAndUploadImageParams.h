@class NSString, NSNumber;

@interface BDXBridgeChooseAndUploadImageParams : BDXBridgeModel

@property (copy, nonatomic) NSString *cropWidth;
@property (copy, nonatomic) NSString *cropHeight;
@property (retain, nonatomic) NSNumber *compressMaxSize;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
