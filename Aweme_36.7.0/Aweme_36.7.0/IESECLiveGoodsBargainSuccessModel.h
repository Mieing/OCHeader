@class IESECLiveGoodsBargainPrice, IESECLiveGoodsBargainAnimation, NSString;

@interface IESECLiveGoodsBargainSuccessModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveGoodsBargainPrice *price;
@property (retain, nonatomic) IESECLiveGoodsBargainAnimation *animation;
@property (copy, nonatomic) NSString *relatedInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
