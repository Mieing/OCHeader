@class MMTableViewInfo, NSString, JSAPIGetAllUseUserInfoResponse, CContact, NSMutableDictionary, BrandProfileReporter, MMUILabel;
@protocol BrandProfileSettingViewControllerDelegate;

@interface BrandProfileSettingViewController : MMUIViewController <WCActionSheetDelegate, IMMTemplateMsgAuthServiceExt, PBMessageObserverDelegate> {
    BOOL _isNewMessageNotifySwitchOn;
    BOOL _isReceiveMessageSwitchOn;
    BOOL _isProvideLocationSwitchOn;
    BOOL _hasTemplateMsgAuthCell;
    BrandProfileReporter *_reporter;
    MMTableViewInfo *_tableViewInfo;
    double _tableViewWidth;
}

@property (retain, nonatomic) JSAPIGetAllUseUserInfoResponse *jsAPIGetAllUseUserInfoResponse;
@property (retain, nonatomic) MMUILabel *emptyLabel;
@property (retain, nonatomic) NSString *appId;
@property (weak, nonatomic) id<BrandProfileSettingViewControllerDelegate> delegate;
@property (retain, nonatomic) CContact *brandContact;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int profileEnterTimeStamps;
@property (retain, nonatomic) NSMutableDictionary *extInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)addLocalSystemMessageWhenReceiveMessageSwitchChanged;
- (id)init;
- (void)viewWillBePoped:(BOOL)a0;
- (void)initTableViewInfo;
- (void)initEmptyWordingView;
- (void)viewDidLayoutSubviews;
- (void)reloadTableViewInfo;
- (void)onFetchShowInSettingScopeList:(id)a0 forUser:(id)a1 hasSettingEntry:(BOOL)a2;
- (void)switchNewMessageNotificationCell:(id)a0;
- (void)switchReceiveMessageCell:(id)a0;
- (void)switchProvideLocationCell:(id)a0;
- (void)switchRecordScopeAuthState:(id)a0;
- (void)switchLocationScopeAuthState:(id)a0;
- (void)onProvideLocationConfirm;
- (void)onProvideLocationCancel;
- (void)clickTemplateMsgMgr;
- (void)openAuthorizedScopeVC;
- (void)openAuthList;
- (void)clickClearMessageCell;
- (void)reportClearMessage;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)requestAuthorizedInfo;
- (void)requsetModifyUsedUserInfoWithScope:(id)a0 Switch:(id)a1;
- (void)handleGetBizAuthInfoResponse:(id)a0;
- (void)handleModBizUseUserInfoResponse:(id)a0;
- (BOOL)isInMyContactList;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
