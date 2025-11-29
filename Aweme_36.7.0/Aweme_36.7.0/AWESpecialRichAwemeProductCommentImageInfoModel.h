@class AWESpecialRichAwemeCommentAttitudeModel, AWESpecialRichAwemeProductLabelModel;

@interface AWESpecialRichAwemeProductCommentImageInfoModel : AWEBaseApiModel

@property (retain, nonatomic) AWESpecialRichAwemeCommentAttitudeModel *commentAttitudeModel;
@property (retain, nonatomic) AWESpecialRichAwemeProductLabelModel *productLabelModel;

+ (id)commentAttitudeModelJSONTransformer;
+ (id)productLabelModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
