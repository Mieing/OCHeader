@class NSNumber, NSString;

@interface BDXBridgeUploadImagesToImageXUploadConfig : BDXBridgeModel

@property (retain, nonatomic) NSNumber *sliceSize;
@property (retain, nonatomic) NSNumber *socketNum;
@property (copy, nonatomic) NSString *traceId;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
