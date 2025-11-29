@class NSString, AWEURLModel;

@interface AWESpecialRichAwemeCommentAttitudeModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *productInfo;
@property (retain, nonatomic) AWEURLModel *attitudeIcon;

+ (id)attitudeIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
