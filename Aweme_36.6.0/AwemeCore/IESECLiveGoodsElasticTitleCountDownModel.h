@class NSString, IESECLiveConfigCountDownModel;

@interface IESECLiveGoodsElasticTitleCountDownModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *bgColor;
@property (retain, nonatomic) IESECLiveConfigCountDownModel *countdown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
