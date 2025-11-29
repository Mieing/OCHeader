@class NSString;

@interface AWEAdPlayableSetCurrentVideoParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *videoId;
@property (nonatomic) BOOL isAuto;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
