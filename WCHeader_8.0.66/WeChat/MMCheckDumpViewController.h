@class UIView, NSString, UISwitch, MMProgressView, UIImageView, UIButton, MMPickerView, UITextField, NSMutableArray, MMUILabel, UILabel, UIScrollView;

@interface MMCheckDumpViewController : MMUIViewController <IWCDumpReporterMgrExt, MMPickerViewDelegate> {
    UITextField *m_textFiled;
    unsigned long long m_nTimeInterval;
    NSMutableArray *m_arrDates;
    long long m_selectedRow;
    UIView *roundView;
    UILabel *m_tipLabel;
    UILabel *m_checklabel;
    UISwitch *m_checkSitchView;
    UIButton *m_btnDate;
    MMUILabel *m_rightLab;
    UIButton *m_btndump;
    UILabel *m_warningLabel;
    UIImageView *m_imgvRecover;
    MMPickerView *m_pickerView;
    UIButton *m_btnTestDBCorrupt;
    UIButton *m_btnTestFrameDrop;
    UIScrollView *m_mainScrollView;
    MMProgressView *m_progressView;
    UIButton *m_btnFinish;
    BOOL m_isUploading;
    BOOL m_isFinish;
    unsigned long long m_status;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)makeInitView;
- (void)makeUploadingView;
- (void)makeFinishState;
- (void)makeUploadSuccessView;
- (void)makeScrollView;
- (void)makeIconView:(id)a0;
- (void)makeTipLabelWithText:(id)a0;
- (void)makeProgressView;
- (void)makeFinishBtn;
- (void)initData;
- (void)onSwitchValueChange:(id)a0;
- (void)onUploadDump;
- (void)onChoseDate:(id)a0;
- (void)onFinish;
- (void)OnClickBackBarButton:(id)a0;
- (void)MMPickerViewDidChooseRow:(long long)a0 atSession:(long long)a1;
- (void)onDumpReporterUploadResult:(BOOL)a0;
- (void)onDumpReporterUploadProgress:(double)a0;
- (void).cxx_destruct;

@end
