@class IESIMCodeGenEWechatPanelModel, NSArray;

@interface IESIMCodeGenGetMasterEWechatPanelResponseModel : AWEBaseResponseModel

@property (retain, nonatomic) IESIMCodeGenEWechatPanelModel *guidePanelModel;
@property (copy, nonatomic) NSArray *wechatCaLinkListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
