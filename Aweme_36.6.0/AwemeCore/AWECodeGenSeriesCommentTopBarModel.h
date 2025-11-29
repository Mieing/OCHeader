@class NSString;

@interface AWECodeGenSeriesCommentTopBarModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *preTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
