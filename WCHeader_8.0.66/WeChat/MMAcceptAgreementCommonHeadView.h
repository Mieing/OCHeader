@class MMUILabel, NSString, MMHeadImageView, MMWebImageView, RichTextView, UIButton;
@protocol MMAcceptAgreementCommonHeadViewDelegate;

@interface MMAcceptAgreementCommonHeadView : MMUIView <ILinkEventExt> {
    MMHeadImageView *m_headImageView;
}

@property (nonatomic) double m_topMargin;
@property (retain, nonatomic) MMUILabel *m_titleView;
@property (retain, nonatomic) MMUILabel *m_contentView;
@property (retain, nonatomic) UIButton *m_contentButton;
@property (retain, nonatomic) MMWebImageView *m_logoView;
@property (retain, nonatomic) RichTextView *m_contentRichTextView;
@property (nonatomic) double m_titleViewMargin;
@property (nonatomic) double m_contentViewMargin;
@property (nonatomic) BOOL largeContentFont;
@property (nonatomic) long long contentAlignment;
@property (weak, nonatomic) id<MMAcceptAgreementCommonHeadViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateViewWithLogoSVG:(id)a0 headContact:(id)a1 headTitle:(id)a2 headContent:(id)a3;
- (void)updateViewWithLogoSVGImage:(id)a0 headTitle:(id)a1 headContent:(id)a2;
- (void)updateViewWithLogoSVGImage:(id)a0 headTitle:(id)a1 headContent:(id)a2 numberOfLines:(unsigned long long)a3;
- (void)updateViewWithLogoSVGImage:(id)a0 headTitle:(id)a1 headContent:(id)a2 numberOfLines:(unsigned long long)a3 isDotContentStyle:(BOOL)a4;
- (void)updateViewWithLogoSVGImage:(id)a0 headContact:(id)a1 headTitle:(id)a2 headContent:(id)a3;
- (void)updateViewWithLogoIconUrl:(id)a0 logoDarkIconUrl:(id)a1 headTitle:(id)a2 headContent:(id)a3;
- (void)updateViewWithLogoSVGImage:(id)a0 headContact:(id)a1 headTitle:(id)a2 headContent:(id)a3 numberOfLines:(unsigned long long)a4 logoLightIconUrl:(id)a5 logoDarkIconUrl:(id)a6 isDotContentStyle:(BOOL)a7;
- (void)updateHeadContentRichTextView:(id)a0;
- (void)jumpToSystemPrivacySetting;
- (double)getTitleViewMargin;
- (double)getContentViewMargin;
- (id)titleTextColor;
- (id)contentTextColor;
- (id)contentTextFont;
- (id)titleViewFont;
- (void)udpateContentViewConfig;
- (id)dotWithMultilineIntros:(id)a0 font:(id)a1 textColor:(id)a2;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
