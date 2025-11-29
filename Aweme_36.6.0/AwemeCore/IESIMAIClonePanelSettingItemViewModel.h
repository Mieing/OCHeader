@class NSString, NSArray;

@interface IESIMAIClonePanelSettingItemViewModel : NSObject

@property (copy, nonatomic) NSString *settingName;
@property (copy, nonatomic) NSString *settingDesc;
@property (nonatomic) unsigned long long value;
@property (copy, nonatomic) NSArray *settingEnums;
@property (copy, nonatomic) id /* block */ valueDidChangedBlock;
@property (copy, nonatomic) id /* block */ didClicked;

- (void).cxx_destruct;
- (void)dealloc;

@end
