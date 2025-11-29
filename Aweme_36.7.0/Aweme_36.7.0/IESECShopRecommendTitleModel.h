@class NSString, IESECURLModel;

@interface IESECShopRecommendTitleModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *image;
@property (retain, nonatomic) IESECURLModel *titleImage;
@property (nonatomic) double topMargin;
@property (nonatomic) double bottomMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
