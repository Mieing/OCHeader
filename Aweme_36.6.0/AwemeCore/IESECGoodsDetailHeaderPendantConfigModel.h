@interface IESECGoodsDetailHeaderPendantConfigModel : IESECBaseApiModel

@property (nonatomic) BOOL hideFullMode;
@property (nonatomic) BOOL hideHalfMode;
@property (nonatomic) BOOL clientScale;
@property (nonatomic) BOOL fontScale;

+ (id)JSONKeyPathsByPropertyKey;

@end
