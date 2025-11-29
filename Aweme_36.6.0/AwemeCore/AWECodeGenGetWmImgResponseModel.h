@class AWECodeGenWmImgDataModel;

@interface AWECodeGenGetWmImgResponseModel : AWEBaseResponseModel

@property (nonatomic) int code;
@property (retain, nonatomic) AWECodeGenWmImgDataModel *dataModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
