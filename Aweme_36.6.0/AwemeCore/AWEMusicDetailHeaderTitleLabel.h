@class UIView, NSString, UIImageView, UILabel, NSAttributedString, UIButton;

@interface AWEMusicDetailHeaderTitleLabel : AWEAttachmentLabel

@property (retain, nonatomic) UIImageView *originalImageView;
@property (retain, nonatomic) UIButton *billboardButton;
@property (retain, nonatomic) UILabel *rankNumberLabel;
@property (retain, nonatomic) UILabel *rankTitleLabel;
@property (retain, nonatomic) NSAttributedString *rankAttributedTitle;
@property (copy, nonatomic) NSString *rankString;
@property (retain, nonatomic) UIImageView *crownImageView;
@property (retain, nonatomic) UIView *billboardTitleBackgroundView;
@property (nonatomic) unsigned long long attachmentAlignment;
@property (copy, nonatomic) id /* block */ attachmentAction;
@property (copy, nonatomic) id /* block */ textLabelAttachmentAction;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *rankTitle;
@property (nonatomic) BOOL isOriginal;
@property (nonatomic) BOOL shouldShowOriginalIcon;
@property (nonatomic) double originalImageWidth;
@property (nonatomic) BOOL isAttributedTitle;
@property (nonatomic) BOOL useHeavyFont;

+ (id)attriTextWithArrow:(id)a0;

- (void)handleTapOnContent:(id)a0;
- (void)p_generateOriginalImageViewAttachment;
- (void)p_generateBillboardButtonAttachment;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rankTitleRect;
- (void)p_setupBillboardButton;
- (long long)p_billboardAttachmentContentMode;
- (long long)p_YYTextVerticalAlignment;
- (void)onBillboardButtonClicked:(id)a0;
- (void)onTextClicked:(id)a0;
- (void)resetRankAttachment;
- (void)setRankString:(id)a0 rankAttributedTitle:(id)a1 attachmentAction:(id /* block */)a2 textLabelAttachmentAction:(id /* block */)a3;
- (void)setRank:(long long)a0 rankAttributedTitle:(id)a1 attachmentAction:(id /* block */)a2;
- (void)setRank:(long long)a0 rankTitle:(id)a1 attachmentAction:(id /* block */)a2;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)init;
- (BOOL)accessibilityActivate;

@end
