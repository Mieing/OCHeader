@class AWECodeGenAdditionalDiggModel, AWECodeGenAdditionalCommentModel;

@interface AWECodeGenAdditionalInfoModel : AWEBaseDataModel

@property (nonatomic) long long type;
@property (retain, nonatomic) AWECodeGenAdditionalDiggModel *diggModel;
@property (retain, nonatomic) AWECodeGenAdditionalCommentModel *commentModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
