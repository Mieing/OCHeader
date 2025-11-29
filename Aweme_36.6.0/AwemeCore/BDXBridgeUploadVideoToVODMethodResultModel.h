@class NSString, BDXBridgeUploadVideoToVODErrorInfo, BDXBridgeUploadVideoToVODVideoInfo;

@interface BDXBridgeUploadVideoToVODMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *traceId;
@property (retain, nonatomic) BDXBridgeUploadVideoToVODErrorInfo *errorInfo;
@property (retain, nonatomic) BDXBridgeUploadVideoToVODVideoInfo *videoInfo;

+ (id)errorInfoJSONTransformer;
+ (id)videoInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
