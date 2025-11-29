@class IESECRelationGoodsModel, IESECWinVideoInfo, NSString;

@interface IESECWinVideoProductHangingModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECWinVideoInfo *video;
@property (retain, nonatomic) IESECRelationGoodsModel *product;
@property (copy, nonatomic) NSString *aweme;
@property (nonatomic) BOOL showProductDetail;
@property (nonatomic) BOOL isContinuePlay;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
