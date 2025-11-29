@class WCPOIAddressPickerItem, NSString, MMUIButton, WCBaseTextFieldItem, CLLocation, MMTableViewInfo, NSMutableArray;
@protocol POICreateDelegate;

@interface WCTimelinePOICreateViewController : MMUIViewController <MMTableViewInfoDelegate, WCBaseInfoItemDelegate, ICreatePOIMgrExt, POICategoryDelegate, WCAddressLogicMgrExt, ILocationMgrExt> {
    NSString *_poiName;
    CLLocation *_location;
    MMTableViewInfo *_tableViewInfo;
    NSMutableArray *_infoItems;
    WCBaseTextFieldItem *_poiNameTextFieldItem;
    WCPOIAddressPickerItem *_districtPickerItem;
    WCBaseTextFieldItem *_addressTextFieldItem;
    WCBaseTextFieldItem *_categoryPickerItem;
    WCBaseTextFieldItem *_telephoneTextFieldItem;
    MMUIButton *_seeMoreButton;
    unsigned long long _geoTag;
    BOOL _lockSelection;
    BOOL _isLiteView;
}

@property (nonatomic) unsigned int createPOICellIndex;
@property (retain, nonatomic) NSString *currentSearchID;
@property (weak, nonatomic) id<POICreateDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPOIName:(id)a0 Location:(id)a1 Delegate:(id)a2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableView;
- (void)initRequiredData;
- (void)initOptionalData;
- (void)initDistrict;
- (void)selectAddress:(id)a0;
- (void)hideKeyboard;
- (void)onSeeMore;
- (void)onReturn;
- (void)onDone;
- (BOOL)validateData;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)makeInfoCell:(id)a0 cellInfo:(id)a1;
- (void)clickInfoCell:(id)a0 index:(id)a1;
- (void)OnCreatePOI:(id)a0 ID:(id)a1 Error:(int)a2;
- (void)onSelectedCategory:(id)a0;
- (void)OnGetGetAllAddressStageData:(id)a0 Error:(id)a1;
- (void)onDidFindAddress:(id)a0 forTag:(unsigned long long)a1;
- (void)WCBaseInfoItemBeginEdit:(id)a0;
- (void).cxx_destruct;

@end
