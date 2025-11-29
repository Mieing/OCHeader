@class UserIdAuthorizePageInfo, WXAPhoneInfo, WAUserIdPageSheetViewModel;

@interface WAAuthorizeUserIdPageSheet : WAAuthorizePageSheet

@property (retain, nonatomic) WAUserIdPageSheetViewModel *uidViewModel;
@property (retain, nonatomic) UserIdAuthorizePageInfo *pageInfo;
@property (retain, nonatomic) WXAPhoneInfo *selectedItem;
@property (copy, nonatomic) id /* block */ managerPhoneNumberAction;

- (id)initWithPageInfo:(id)a0;
- (id)customSubviewClassList;
- (id)subViewModel;
- (void).cxx_destruct;

@end
