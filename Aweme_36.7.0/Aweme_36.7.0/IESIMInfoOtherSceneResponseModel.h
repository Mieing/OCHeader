@class NSArray, IESIMInfoOtherSceneGroupShareInfoModel, IESIMInfoOtherSceneGroupAppletInfoModel;

@interface IESIMInfoOtherSceneResponseModel : AWEBaseResponseModel

@property (retain, nonatomic) IESIMInfoOtherSceneGroupShareInfoModel *groupShareInfoModel;
@property (readonly, copy, nonatomic) NSArray *groupBotSecIdArray;
@property (readonly, copy, nonatomic) IESIMInfoOtherSceneGroupAppletInfoModel *groupAppletInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
