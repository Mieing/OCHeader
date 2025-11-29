@class AWECodeGenAwemeModel;

@interface AWECodeGenCommentVideoModel : AWEBaseDataModel

@property (nonatomic) long long videoType;
@property (retain, nonatomic) AWECodeGenAwemeModel *aliasAwemeModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
