@class NSString, IESIMCodeGenEWechatPanelModel;

@interface IESIMCodeGenGetGuestEWechatPanelResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSString *eWechatSchema;
@property (retain, nonatomic) IESIMCodeGenEWechatPanelModel *eWechatPanelModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
