@class NSString;

@interface AWECodeGenEntCommentGradeInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *gradeImgUrl;
@property (copy, nonatomic) NSString *gradeDesc;
@property (copy, nonatomic) NSString *commentId;
@property (copy, nonatomic) NSString *compassId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
