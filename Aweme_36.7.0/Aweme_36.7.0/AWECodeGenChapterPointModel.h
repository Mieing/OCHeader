@class NSString;

@interface AWECodeGenChapterPointModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *detail;
@property (nonatomic) int type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
