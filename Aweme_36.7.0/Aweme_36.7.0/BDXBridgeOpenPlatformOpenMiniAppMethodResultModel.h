@class NSNumber, NSString;

@interface BDXBridgeOpenPlatformOpenMiniAppMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMsg;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
