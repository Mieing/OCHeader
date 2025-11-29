@class WAPhoneNumberAuthorizeSheetInfo, NSString, WAPhoneNumberPageSheetViewModel, WAAuthorizeResultInfo;
@protocol WAPhoneNumberAuthorizeViewControllerDelegate;

@interface WAPhoneNumberAuthorizeViewController : WAAuthorizeViewController <IWAPhoneNumberAuthorizePageSheet>

@property (retain, nonatomic) WAPhoneNumberPageSheetViewModel *pnViewModel;
@property (weak, nonatomic) id<WAPhoneNumberAuthorizeViewControllerDelegate> authDelegate;
@property (retain, nonatomic) WAPhoneNumberAuthorizeSheetInfo *info;
@property (nonatomic) long long selectedIndex;
@property (readonly, nonatomic) WAAuthorizeResultInfo *resultInfo;
@property (copy, nonatomic) id /* block */ acceptAction;
@property (copy, nonatomic) id /* block */ rejectAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfo:(id)a0;
- (void)reloadData;
- (void)managePhoneNumber;
- (void)togglePhone:(id)a0;
- (id)customSubviewClassList;
- (id)subViewModel;
- (void).cxx_destruct;

@end
