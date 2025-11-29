@class NSString, BDUGLuckyUploadVideoToVODErrorInfo, BDUGLuckyUploadVideoToVODVideoInfo;

@interface BDUGLuckyUploadVideoToVODMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *traceId;
@property (retain, nonatomic) BDUGLuckyUploadVideoToVODErrorInfo *errorInfo;
@property (retain, nonatomic) BDUGLuckyUploadVideoToVODVideoInfo *videoInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
