@class NSString;

@interface IESLiveAdminSwitchCellItem : IESLiveAdminCellItem

@property (nonatomic) BOOL isDisabled;
@property (copy, nonatomic) NSString *disabledToast;
@property (nonatomic) BOOL isOn;
@property (nonatomic) int currentPrivilege;

@end
