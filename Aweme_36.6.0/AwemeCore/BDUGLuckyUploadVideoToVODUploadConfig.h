@class NSNumber, NSString;

@interface BDUGLuckyUploadVideoToVODUploadConfig : BDXBridgeModel

@property (retain, nonatomic) NSNumber *sliceSize;
@property (retain, nonatomic) NSNumber *socketNum;
@property (copy, nonatomic) NSString *traceId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
