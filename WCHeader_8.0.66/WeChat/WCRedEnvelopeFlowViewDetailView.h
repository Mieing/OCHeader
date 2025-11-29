@class WCRedEnvelopesReceiveHomeTemplateItem, WCRedEnvelopesReceiveHomeTemplateView, HbEnvelopSource, NSString, UILabel, UIView, UIButton;
@protocol WCRedEnvelopeFlowViewDetailViewDelegate;

@interface WCRedEnvelopeFlowViewDetailView : UIView <WCRedEnvelopesReceiveHomeTemplateViewDelegate>

@property (retain, nonatomic) UIView *m_skinBackgroundView;
@property (retain, nonatomic) UILabel *m_corpNameLabel;
@property (retain, nonatomic) UILabel *overtimeLabel;
@property (retain, nonatomic) UIButton *m_doneBtn;
@property (retain, nonatomic) UIButton *m_previewBtn;
@property (retain, nonatomic) UIButton *m_closeBtn;
@property (retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateItem *m_templateItem;
@property (retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateView *templateItemView;
@property (retain, nonatomic) HbEnvelopSource *hbShowResource;
@property (weak, nonatomic) id<WCRedEnvelopeFlowViewDetailViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endAnimation;
- (void)showAnimation;
- (void)removeView;
- (id)getTemplateItemData:(id)a0;
- (void)updateViewWithData:(id)a0;
- (void)updateView;
- (void)OnCancelButtonDone;
- (void)onTapUseCoverBtn;
- (void)onPreviewBtnTap;
- (void)gotoPreview;
- (void).cxx_destruct;

@end
