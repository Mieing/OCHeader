@class MMScrollView, NSString, MMUILabel, MMUIImageView, MMUIView, MMUIButton, UIButton;
@protocol IntelligentMsgImgStartUsingViewControllerDelegate;

@interface IntelligentMsgImgStartUsingViewController : MMUIHalfScreenViewController <IntelligentMsgImgTipViewControllerDelegate> {
    UIButton *m_makeSureButton;
    UIButton *m_makeRejectButton;
    MMUIButton *m_backgroundButton;
    MMScrollView *m_contentView;
    MMUILabel *m_titleView;
    MMUILabel *m_descContentView;
    MMUIImageView *m_imageView;
    MMUIView *m_operateView;
    MMUIButton *m_protectButton;
    MMUIButton *m_explainButton;
    MMUIView *m_operateViewIntervalView;
    double m_contentViewTop;
}

@property (weak, nonatomic) id<IntelligentMsgImgStartUsingViewControllerDelegate> m_delegate;
@property (retain, nonatomic) NSString *m_sessionId;
@property (retain, nonatomic) NSString *m_nsChatName;
@property (nonatomic) BOOL m_isDarkMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initData;
- (long long)overrideUserInterfaceStyle;
- (void)layoutView;
- (void)layoutContentView;
- (void)layoutTitleView;
- (void)layoutDescContentView;
- (void)layoutImageView;
- (void)layoutMakeRejectButton;
- (void)layoutMakeSureButton;
- (void)layoutOperateView;
- (id)genOperateViewButton:(id)a0;
- (void)OnMakeRejectButtionClick;
- (void)OnMakeSureButtionClick;
- (void)OnProtectButtionClick;
- (void)OnExplainButtionClick;
- (void)showImgTipViewController;
- (void)onClickClose:(id)a0;
- (void)OnIntelligentMsgImgCloseButtionClick;
- (id)navigationBarBackgroundColor;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
