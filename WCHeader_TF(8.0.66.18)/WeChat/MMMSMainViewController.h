@class UIScrollView, UIImageView, UISwitch, UILabel, UIView, UIButton;

@interface MMMSMainViewController : MMUIViewController {
    UIImageView *m_imgvRecover;
    UILabel *m_tipLabel;
    UIView *m_roundView;
    UILabel *m_checklabel;
    UISwitch *m_checkSitchView;
    UIButton *m_btnUpload;
    UILabel *m_warningLabel;
    UIScrollView *m_mainScrollView;
}

- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)makeInitView;
- (void)makeScrollView;
- (void)makeIconView;
- (void)makeTipLabelWithText:(id)a0;
- (void)onSwitchValueChange:(id)a0;
- (void)onUpload;
- (void).cxx_destruct;

@end
