@class AWECodeGenCommentModel;

@interface AWECodeGenCEMAdditionalInfoModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenCommentModel *commentModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
