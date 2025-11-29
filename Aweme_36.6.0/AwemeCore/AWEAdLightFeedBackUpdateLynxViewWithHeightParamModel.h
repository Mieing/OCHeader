@class NSString, NSDictionary;

@interface AWEAdLightFeedBackUpdateLynxViewWithHeightParamModel : BDXBridgeModel

@property (nonatomic) double height;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSDictionary *appendAdExtraData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
