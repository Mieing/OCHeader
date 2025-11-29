@class UIScrollView, NSString, UIView, MMHeadImageView, UIImageView, UIButton, MMUILabel, CContact, CContactVerifyLogic;

@interface WAWeRunInstallViewController : MMUIViewController <contactVerifyLogicDelegate> {
    CContact *m_weSportContact;
    id /* block */ m_callBack;
    CContactVerifyLogic *m_oLogic;
    UIScrollView *_backgroundScrollView;
    UIView *m_headerView;
    MMHeadImageView *m_headImgView;
    double m_headImgOriginalWidth;
    double m_headImgOriginalHeight;
    double m_headImgOriginalImageWidth;
    double m_headImgOriginalImageHeight;
    MMUILabel *m_displayNameLabel;
    UIView *m_statusView;
    MMUILabel *m_statusLabel;
    UIImageView *m_statusImgView;
    UIView *m_descView;
    UIView *m_separateLine;
    MMUILabel *m_descTitleLabel;
    UIView *m_descTipsIcon;
    MMUILabel *m_descTipsLabel;
    UIButton *m_installBtn;
    BOOL bIsClosed;
}

@property (copy, nonatomic) NSString *m_nsWeappName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)onCloseModalView:(id)a0;
- (void)layoutHeaderView;
- (void)layoutDescView;
- (void)layoutFooterView;
- (void)installPlugin;
- (void)contactAddContactOk:(id)a0;
- (void)contactSendRequestOk:(id)a0;
- (void)handleAddedContact;
- (void).cxx_destruct;

@end
