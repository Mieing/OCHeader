@class NSArray, NSString, IESECLiveGoodsRitTagUIConfigModel;

@interface IESECLiveEtaModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveGoodsRitTagUIConfigModel *uiConfig;
@property (retain, nonatomic) NSArray *labels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)labelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
