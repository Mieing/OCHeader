@class AWESpecialRichAwemeDescriptionModel, AWESpecialRichAwemeProductInfoModel, NSString, AWESpecialRichAwemeLifeCardImageInfoModel, NSDictionary, AWESpecialRichAwemeLifeEvaluationInfoModel, AWESpecialRichAwemeProductCommentImageInfoModel;

@interface AWESpecialRichAwemeModel : AWEBaseApiModel

@property (nonatomic) long long type;
@property (retain, nonatomic) AWESpecialRichAwemeDescriptionModel *descriptionModel;
@property (retain, nonatomic) AWESpecialRichAwemeProductInfoModel *productInfoModel;
@property (copy, nonatomic) NSString *detailScheme;
@property (retain, nonatomic) AWESpecialRichAwemeLifeCardImageInfoModel *lifeCardImageInfoModel;
@property (retain, nonatomic) AWESpecialRichAwemeLifeEvaluationInfoModel *lifeEvaluationInfoModel;
@property (copy, nonatomic) NSString *extraInfo;
@property (copy, nonatomic) NSDictionary *extraInfoDictionary;
@property (retain, nonatomic) AWESpecialRichAwemeProductCommentImageInfoModel *productCommentModel;

+ (id)descriptionModelJSONTransformer;
+ (id)productInfoModelJSONTransformer;
+ (id)lifeEvaluationInfoModelJSONTransformer;
+ (id)productCommentModelJSONTransformer;
+ (id)lifeCardImageInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)shouldAutoPostTag;
- (id)postType;
- (void).cxx_destruct;

@end
