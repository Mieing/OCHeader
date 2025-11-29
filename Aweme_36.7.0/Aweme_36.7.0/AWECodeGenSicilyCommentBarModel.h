@class NSString;

@interface AWECodeGenSicilyCommentBarModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
