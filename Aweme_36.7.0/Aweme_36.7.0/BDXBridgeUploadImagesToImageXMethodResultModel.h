@class NSString, NSArray, BDXBridgeUploadImagesToImageXErrorInfo;

@interface BDXBridgeUploadImagesToImageXMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *traceId;
@property (copy, nonatomic) NSArray *imageInfos;
@property (copy, nonatomic) BDXBridgeUploadImagesToImageXErrorInfo *errorInfo;

+ (id)imageInfosJSONTransformer;
+ (id)errorInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
