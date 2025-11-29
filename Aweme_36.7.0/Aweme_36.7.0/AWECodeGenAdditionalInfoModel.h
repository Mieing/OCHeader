@class AWECodeGenAdditionalDiggModel, AWECodeGenAdditionalCommentModel, AWECodeGenAdditionalIMGroupAuditModel;

@interface AWECodeGenAdditionalInfoModel : AWEBaseDataModel

@property (nonatomic) long long type;
@property (retain, nonatomic) AWECodeGenAdditionalDiggModel *diggModel;
@property (retain, nonatomic) AWECodeGenAdditionalCommentModel *commentModel;
@property (retain, nonatomic) AWECodeGenAdditionalIMGroupAuditModel *groupAuditModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
