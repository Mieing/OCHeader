@class ComboData, NSString, Button, HTSLiveImage, APPVersion;

@interface InteractionPluginCommonData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *totalCntText;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *intro;
@property (retain, nonatomic) Button *button;
@property (nonatomic) BOOL hasButton;
@property (retain, nonatomic) ComboData *comboData;
@property (nonatomic) BOOL hasComboData;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *singleMonthPrice;
@property (retain, nonatomic) APPVersion *appVersion;
@property (nonatomic) BOOL hasAppVersion;
@property (nonatomic) BOOL permission;
@property (nonatomic) int pluginType;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *uniqId;

+ (id)descriptor;

@end
