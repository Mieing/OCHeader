@class NSString;

@interface IESECMallXBridgeEcMallLocalImageDisplayCheckMethodResultModel : BDXBridgeModel

@property (nonatomic) BOOL canDisplayImage;
@property (copy, nonatomic) NSString *displayFailReason;
@property (copy, nonatomic) NSString *imagePath;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
