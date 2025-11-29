@class NSNumber, NSString;

@interface BDXBridgeUploadImagesToImageXErrorInfo : BDXBridgeModel

@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMessage;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
