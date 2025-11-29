@class NSNumber, NSString;

@interface BDXBridgeUploadVideoToVODErrorInfo : BDXBridgeModel

@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMessage;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
