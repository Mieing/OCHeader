@class AWEIMCodeGenFileInfoModel;

@interface AWEIMCodeGenFileAddResponseModel : AWEBaseResponseModel

@property (retain, nonatomic) AWEIMCodeGenFileInfoModel *fileModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
