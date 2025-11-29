@class NSString, AWEURLModel;

@interface AWEIMSubscribeArticleModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *jumpUrl;
@property (nonatomic) long long articleId;
@property (retain, nonatomic) AWEURLModel *articleImg;
@property (nonatomic) long long readCount;

+ (id)articleImgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
