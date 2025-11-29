@class NSArray, NSString, NSNumber, IESECLiveImageURLModel;

@interface IESECLiveGoodsCarouselInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *time;
@property (retain, nonatomic) NSArray *data;
@property (retain, nonatomic) IESECLiveImageURLModel *leftIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
