@class AWECodeGenCommonEntranceBodyModel;

@interface AWECodeGenCommonEntranceResponseModel : AWEBaseDataModel

@property (nonatomic) int status;
@property (retain, nonatomic) AWECodeGenCommonEntranceBodyModel *bodyModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
