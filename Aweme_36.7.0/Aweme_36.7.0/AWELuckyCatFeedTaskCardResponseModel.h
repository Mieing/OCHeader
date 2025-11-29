@class NSString, AWELuckyCatFeedTaskCardModel, AWELuckyCatFeedTaskCardInsertInfo;

@interface AWELuckyCatFeedTaskCardResponseModel : AWELiteBaseApiModel

@property (copy, nonatomic) NSString *cardKey;
@property (retain, nonatomic) AWELuckyCatFeedTaskCardModel *card;
@property (retain, nonatomic) AWELuckyCatFeedTaskCardInsertInfo *insertInfo;

+ (id)cardJSONTransformer;
+ (id)insertInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
