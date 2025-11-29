@class IESECLiveImageURLModel, NSString, IESECLiveGoodsElasticTitleCountDownModel, IESECLiveGoodsCarouselInfoModel;

@interface IESECLiveGoodsElasticTitleLineModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveImageURLModel *leftIcon;
@property (retain, nonatomic) IESECLiveGoodsElasticTitleCountDownModel *countdown;
@property (retain, nonatomic) IESECLiveGoodsCarouselInfoModel *titles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
