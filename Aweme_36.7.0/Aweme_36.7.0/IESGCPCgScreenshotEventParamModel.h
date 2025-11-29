@class NSNumber, NSString;

@interface IESGCPCgScreenshotEventParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *imagePath;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
