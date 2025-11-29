@interface AWERelatedRecomendInfoModel : AWEBaseApiModel

@property (nonatomic) BOOL enablePreload;
@property (nonatomic) int preloadTime;

+ (id)JSONKeyPathsByPropertyKey;

@end
