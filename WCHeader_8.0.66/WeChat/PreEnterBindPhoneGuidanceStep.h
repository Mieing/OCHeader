@class WCAccountBindPhoneControlLogic, NSString, WCAccountPhoneBindGuidanceData;

@interface PreEnterBindPhoneGuidanceStep : PreEnterBaseStep <WCAccountPhoneBindGuidanceViewControllerDelegate, WCAccountBindPhoneControlLogicDelegate>

@property (nonatomic) BOOL isForceShow;
@property (nonatomic) BOOL needSyncEscape;
@property (retain, nonatomic) WCAccountPhoneBindGuidanceData *guidancedData;
@property (retain, nonatomic) WCAccountBindPhoneControlLogic *bindPhoneLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMsg:(id)a0;
- (void)startStep;
- (void)showBindPhoneGuidanceView:(id)a0;
- (void)realFinishStep;
- (void)bindPhoneReturn;
- (void)bindPhoneEnterWithIsFromGuidanceHelp:(BOOL)a0;
- (void)onWCAccountBindPhoneControlLogicStop:(id)a0;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)a0;
- (void).cxx_destruct;

@end
