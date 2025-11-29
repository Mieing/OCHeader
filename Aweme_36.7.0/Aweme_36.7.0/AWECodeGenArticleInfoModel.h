@class NSString;

@interface AWECodeGenArticleInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *articleContent;
@property (copy, nonatomic) NSString *articleId;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) int articleType;
@property (copy, nonatomic) NSString *containerLynxUrl;
@property (nonatomic) long long readTime;
@property (copy, nonatomic) NSString *articleTitle;
@property (copy, nonatomic) NSString *feData;
@property (copy, nonatomic) NSString *detailLynxUrl;
@property (nonatomic) int isCartoon;
@property (copy, nonatomic) NSString *articleExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
