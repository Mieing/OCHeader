@class IESLiveAnchorLocalLifeSchemaInfoModel;

@interface IESLiveAnchorLocalLifeSchemaAllModel : IESLiveAnchorLocalLifeComponentBaseModel

@property (retain, nonatomic) IESLiveAnchorLocalLifeSchemaInfoModel *data;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
