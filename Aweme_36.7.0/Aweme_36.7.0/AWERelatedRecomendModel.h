@class NSString, AWERelatedRecomendInfoModel;

@interface AWERelatedRecomendModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *relatedBarContent;
@property (retain, nonatomic) AWERelatedRecomendInfoModel *infoModel;

+ (id)infoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
