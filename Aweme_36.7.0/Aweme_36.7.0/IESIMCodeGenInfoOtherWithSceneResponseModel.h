@class NSArray, IESIMCodeGenGroupShareInfoModel;

@interface IESIMCodeGenInfoOtherWithSceneResponseModel : AWEBaseResponseModel

@property (retain, nonatomic) IESIMCodeGenGroupShareInfoModel *groupShareInfoModel;
@property (copy, nonatomic) NSArray *groupBotSecIdArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
