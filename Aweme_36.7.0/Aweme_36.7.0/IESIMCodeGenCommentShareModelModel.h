@class IESIMCodeGenCommentModel, IESIMCodeGenAwemeItemModel;

@interface IESIMCodeGenCommentShareModelModel : AWEBaseDataModel

@property (retain, nonatomic) IESIMCodeGenCommentModel *commentModel;
@property (retain, nonatomic) IESIMCodeGenAwemeItemModel *awemeItemModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
