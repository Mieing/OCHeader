@class IESIMCodeGenAwemeUrlModel;

@interface IESIMCodeGenAwemeVideoModel : AWEBaseDataModel

@property (retain, nonatomic) IESIMCodeGenAwemeUrlModel *coverModel;
@property (retain, nonatomic) IESIMCodeGenAwemeUrlModel *originCoverModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
