@class NSString;

@interface IESIMCodeGenEWechatPanelModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *cardAvatarUrl;
@property (copy, nonatomic) NSString *cardStaffName;
@property (copy, nonatomic) NSString *cardCompanyName;
@property (copy, nonatomic) NSString *cardBottomIconUrl;
@property (copy, nonatomic) NSString *cardBottomText;
@property (copy, nonatomic) NSString *panelTitle;
@property (copy, nonatomic) NSString *panelSubTitle;
@property (copy, nonatomic) NSString *panelButtonText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
