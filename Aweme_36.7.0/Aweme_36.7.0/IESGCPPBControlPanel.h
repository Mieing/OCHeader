@class IESGCPPBSettingTab, IESGCPPBHelpTab, IESGCPPBWelfareTab;

@interface IESGCPPBControlPanel : GPBMessage

@property (retain, nonatomic) IESGCPPBSettingTab *setting;
@property (nonatomic) BOOL hasSetting;
@property (retain, nonatomic) IESGCPPBHelpTab *help;
@property (nonatomic) BOOL hasHelp;
@property (retain, nonatomic) IESGCPPBWelfareTab *welfare;
@property (nonatomic) BOOL hasWelfare;

+ (id)descriptor;

@end
