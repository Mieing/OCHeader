@class NSArray, WNRTEToolViewHelper, NSString, MMUIView, UIView, UITableView;
@protocol WNRTEToolViewDelegate;

@interface WNRTEToolView : UIView <IWNAudioMgrExt, WNRTEToolViewHelperDelegate, WCActionSheetDelegate, UITableViewDelegate, UITableViewDataSource, IRecordPermissionCheckExt> {
    MMUIView *_extBtnContainer;
    UIView *_tabLine;
    BOOL _allowVoiceClick;
    UIView *_toastView;
    double _baseBtnMargin;
    UITableView *_tableView;
    double _extPanelHeight;
    BOOL _needUseAverageMargin;
}

@property (weak, nonatomic) id<WNRTEToolViewDelegate> delegate;
@property (nonatomic) int viewType;
@property (retain, nonatomic) NSArray *baseBtns;
@property (retain, nonatomic) NSArray *extendBtns;
@property (retain, nonatomic) WNRTEToolViewHelper *toolViewHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initUI;
- (BOOL)isDeviceLandscape;
- (double)realTotalWidth;
- (void)initBasicView;
- (id)genBaseButtomWithType:(int)a0;
- (void)initExtendView;
- (void)showBasicView;
- (void)showTextExtView;
- (double)getExtendPanelHeight;
- (void)updateBtnStatus;
- (id)getTitle:(int)a0;
- (id)getAccessbilityHint:(int)a0;
- (id)getIconName:(int)a0;
- (void)onClickItem:(id)a0;
- (unsigned int)checkExceedMaxObjectCountAndAlert:(unsigned int)a0;
- (void)setBtnSelected:(long long)a0 selected:(BOOL)a1;
- (void)setBtnEnable:(int)a0 Enabled:(BOOL)a1;
- (void)showToastView:(id)a0;
- (void)hideToast;
- (void)hideToastWithAnimation:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onCreateVoice:(id)a0;
- (void)allowVoiceBtnClick;
- (void)OnStartWNAudioRecordWithObj:(id)a0;
- (void)OnEndWNAudioRecordWithObj:(id)a0 FilePath:(id)a1 VoiceTime:(float)a2 VoiceFmt:(unsigned int)a3;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void).cxx_destruct;

@end
