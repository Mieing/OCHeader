@class NSString;

@interface IESLiveAdminSwitchCellItem : IESLiveAdminCellItem

@property (nonatomic) BOOL isDisabled;
@property (copy, nonatomic) NSString *disabledToast;
@property (nonatomic) BOOL isOn;
@property (nonatomic) int currentPrivilege;

- (void).cxx_destruct;
- (id)identifier;

@end
