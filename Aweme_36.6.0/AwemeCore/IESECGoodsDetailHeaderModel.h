@class NSArray, IESECGoodsDetailHeaderPreViewMetaModel, IESECGoodsDetailHeaderFooter, NSDictionary, IESECGoodsDetailHeaderContainerConfig;

@interface IESECGoodsDetailHeaderModel : IESECBaseApiModel

@property (retain, nonatomic) NSArray *pendants;
@property (retain, nonatomic) NSArray *cells;
@property (nonatomic) unsigned long long sizeType;
@property (retain, nonatomic) IESECGoodsDetailHeaderPreViewMetaModel *previewMeta;
@property (retain, nonatomic) IESECGoodsDetailHeaderFooter *footer;
@property (copy, nonatomic) NSDictionary *trackMeta;
@property (copy, nonatomic) NSDictionary *actionMeta;
@property (nonatomic) BOOL needSortPreview;
@property (nonatomic) BOOL enableVideoCollection;
@property (nonatomic) long long changeKeyPosition;
@property (nonatomic) BOOL enableAIVideo;
@property (retain, nonatomic) IESECGoodsDetailHeaderContainerConfig *containerConfig;
@property (readonly, nonatomic) BOOL shouldShow1To1_5RatioHeaderStyleInHalfMode;

+ (id)pendantsJSONTransformer;
+ (id)cellsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
