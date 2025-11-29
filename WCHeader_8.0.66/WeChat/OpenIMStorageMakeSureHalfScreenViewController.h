@class OpenIMArchivePopUpInfo, NSString, MMUIImageView, MMOpenIMStorageMakeSureMaskViewView, MMUIView, MMUIScrollView, UIButton, MMUILabel, CContact, MMUIButton;

@interface OpenIMStorageMakeSureHalfScreenViewController : MMUIHalfScreenViewController {
    UIButton *m_makeSureButton;
    UIButton *m_makeRejectButton;
    MMUIButton *m_backgroundButton;
    MMUIView *m_contentView;
    MMUILabel *m_titleView;
    MMUILabel *m_headView;
    MMUILabel *m_descContentView;
    MMUIScrollView *m_contentScrollView;
    MMUIImageView *m_iconImageView;
    MMUIButton *m_protectButton;
    double m_contentViewTop;
    MMOpenIMStorageMakeSureMaskViewView *m_maskView;
    OpenIMArchivePopUpInfo *m_archivePopUpInfo;
    double m_descContentViewHeight;
}

@property (retain, nonatomic) CContact *m_contact;
@property (retain, nonatomic) NSString *m_privacyAgreementUrl;

- (void)viewDidLoad;
- (void)initData;
- (void)layoutHalfScreenView;
- (void)layoutView;
- (void)updateMaskViewGradientLayer;
- (void)layoutContentView;
- (void)layoutContentScrollView;
- (void)layoutTitleView;
- (void)layoutheadView;
- (void)layoutDescContentView;
- (void)layoutMakeMaskView;
- (void)layoutMakeRejectButton;
- (void)layoutMakeSureButton;
- (void)layoutProtectButton;
- (void)OnMakeRejectButtionClick;
- (void)OnMakeSureButtionClick;
- (void)OnProtectButtionClick;
- (void)onGetOpenIMArchivePopUpInfo:(id)a0 archivePopUpInfo:(id)a1 success:(BOOL)a2 errMsg:(id)a3;
- (void)onUpdateOpenIMStorageArchivePopUp:(id)a0 privacyAgreementUrl:(id)a1 success:(BOOL)a2 errMsg:(id)a3;
- (id)navigationBarBackgroundColor;
- (void).cxx_destruct;

@end
