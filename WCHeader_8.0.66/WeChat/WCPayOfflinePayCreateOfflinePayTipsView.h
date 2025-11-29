@class UIButton, NSString, UIImageView, UIView, RichTextView, MMUILabel;
@protocol WCPayOfflinePayCreateOffinePayTipsViewDelegate;

@interface WCPayOfflinePayCreateOfflinePayTipsView : MMUIView <ILinkEventExt>

@property (weak, nonatomic) id<WCPayOfflinePayCreateOffinePayTipsViewDelegate> delegate;
@property (retain, nonatomic) UIImageView *iconImgView;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIImageView *m_iconForSafeTips;
@property (retain, nonatomic) MMUILabel *m_LabelForSafeTips;
@property (retain, nonatomic) UIImageView *m_arrowForSafeTips;
@property (retain, nonatomic) UIButton *safeTipsCoverBtn;
@property (retain, nonatomic) UIView *protocolView;
@property (retain, nonatomic) UIImageView *protocolImgView;
@property (retain, nonatomic) RichTextView *protocolTextView;
@property (retain, nonatomic) UIButton *protocolCoverBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)layoutForKey:(id)a0;
- (id)initCreateOfflinePayTipsViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (id)initReCreateOfflinePayTipsViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 tipsWording:(id)a2 btnWording:(id)a3;
- (void)setupContentView:(id)a0 btnWording:(id)a1;
- (void)updateCoverButtonForSafeTips;
- (void)updateIconForSafeTips;
- (void)updateLabelForSafeTips;
- (void)updateArrowForSafeTips;
- (void)adjustBottomTips;
- (void)updateProtocolView;
- (void)confirmBtnPress:(id)a0;
- (void)clickSafeTips;
- (void)shakeProtocolView;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)protocolBtnClick;
- (void).cxx_destruct;

@end
