@class NSString, IESECLiveImageURLModel;

@interface IESECLiveGoodsBizExtendParam : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *leafCategory;
@property (nonatomic) long long dynamicRecommendIndex;
@property (retain, nonatomic) IESECLiveImageURLModel *coverForDetail;
@property (copy, nonatomic) NSString *checkCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
