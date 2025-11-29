@class UIView, NSString, MMHeadImageView, WCPayWebPagView, UIImageView, WCRedEnvelopesReceiveHomeTemplateItem, UIButton, WCPayWebImageView, UILabel;
@protocol WCRedEnvelopesReceiveHomeTemplateViewDelegate;

@interface WCRedEnvelopesReceiveHomeTemplateView : UIView <WCPayWebImageViewDelegate, PAGViewListener, WCPayWebPagViewDelegate>

@property (retain, nonatomic) UIImageView *topImageView;
@property (retain, nonatomic) UIImageView *curveImageView;
@property (retain, nonatomic) UIImageView *defualtImageView;
@property (retain, nonatomic) UIView *redEnvelopesView;
@property (retain, nonatomic) UIView *topRedView;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) WCPayWebImageView *corpImageView;
@property (retain, nonatomic) UIView *coverBackgroundView;
@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *descTitleLabel;
@property (retain, nonatomic) UIView *coverTagView;
@property (retain, nonatomic) UILabel *tailDescLabel;
@property (retain, nonatomic) WCPayWebImageView *corpImageWidgetImageView;
@property (retain, nonatomic) WCPayWebPagView *pagView;
@property (retain, nonatomic) WCPayWebPagView *atmospherePagView;
@property (nonatomic) BOOL isShowPag;
@property (weak, nonatomic) id<WCRedEnvelopesReceiveHomeTemplateViewDelegate> m_delegate;
@property (retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateItem *templateItem;
@property (nonatomic) BOOL isStoryMode;
@property (nonatomic) BOOL isMiniPicMode;
@property (retain, nonatomic) UIButton *openRedEnvelopesButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 templateItem:(id)a1 showPag:(BOOL)a2 miniPicMode:(BOOL)a3;
- (void)layoutSubviews;
- (void)layoutContentView;
- (void)updateWithTemplateItem:(id)a0;
- (BOOL)hasRedSkin;
- (void)onLoadWCPayWebImageOK:(id)a0;
- (void)onLoadWCPayWebImageFail:(id)a0;
- (void)setOpenBtnHidden:(BOOL)a0;
- (void)playPag;
- (void)updatePagViews;
- (void)onLoadWCPayWebPagOK:(id)a0;
- (void)stopPag;
- (id)demoPagFile;
- (void).cxx_destruct;

@end
