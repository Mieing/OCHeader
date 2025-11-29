@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenCommandTransLongArticleModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *articleId;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWECodeGenUrlModel *coverModel;
@property (copy, nonatomic) NSString *authorName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
