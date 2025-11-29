@class NSString;

@interface IESLiveCommunityInteractSettingCellItem : IESLiveDynamicModel

@property (nonatomic) long long style;
@property (retain, nonatomic) NSString *settingIdentifier;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long textNumber;
@property (copy, nonatomic) NSString *textValue;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *buttonTitle;
@property (nonatomic) BOOL enableUserInteraction;
@property (nonatomic) BOOL switchValue;
@property (nonatomic) BOOL controlSwitchManually;
@property (nonatomic) BOOL disableStorageValue;
@property (copy, nonatomic) id /* block */ action;
@property (copy, nonatomic) id /* block */ didSelectCellAction;

- (void).cxx_destruct;

@end
