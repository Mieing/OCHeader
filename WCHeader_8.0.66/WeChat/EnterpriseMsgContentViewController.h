@class NSString, WCActionSheet;

@interface EnterpriseMsgContentViewController : BaseMsgContentViewController <EnterpriseBrandSelectSheetViewDelegate> {
    WCActionSheet *_enterpriseActionSheet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchEarMode:(id)a0;
- (void)onBackButtonClicked:(id)a0;
- (void)openEnterpriseBrandEntry;
- (void)onEnterpriseSelectBrandContact:(id)a0 sheetView:(id)a1;
- (void).cxx_destruct;

@end
