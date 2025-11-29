@class AWECodeGenAuthorBasicModel, NSString;

@interface AWECodeGenOftenSeeAuthorModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenAuthorBasicModel *authorModel;
@property (copy, nonatomic) NSString *notSeeDesc;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
