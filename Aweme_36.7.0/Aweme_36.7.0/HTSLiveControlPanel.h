@class HTSLiveSettingTab, HTSLiveHelpTab, HTSLiveWelfareTab;

@interface HTSLiveControlPanel : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveSettingTab *setting;
@property (nonatomic) BOOL hasSetting;
@property (retain, nonatomic) HTSLiveHelpTab *help;
@property (nonatomic) BOOL hasHelp;
@property (retain, nonatomic) HTSLiveWelfareTab *welfare;
@property (nonatomic) BOOL hasWelfare;

+ (id)descriptor;

@end
