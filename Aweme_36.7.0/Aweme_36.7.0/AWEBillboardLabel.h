@class UIView, NSString, UIImageView, UILabel, NSAttributedString, UIButton;

@interface AWEBillboardLabel : AWEAttachmentLabel

@property (retain, nonatomic) UIImageView *originalImageView;
@property (retain, nonatomic) UIButton *billboardButton;
@property (retain, nonatomic) UILabel *rankNumberLabel;
@property (retain, nonatomic) UILabel *rankTitleLabel;
@property (retain, nonatomic) NSAttributedString *rankAttributedTitle;
@property (copy, nonatomic) NSString *rankString;
@property (retain, nonatomic) UIImageView *crownImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *billboardTitleBackgroundView;
@property (nonatomic) unsigned long long billboardButtonType;
@property (nonatomic) unsigned long long attachmentAlignment;
@property (copy, nonatomic) id /* block */ attachmentAction;
@property (copy, nonatomic) id /* block */ attachmentLongPressAction;
@property (copy, nonatomic) id /* block */ textLabelAttachmentAction;
@property (copy, nonatomic) id /* block */ textLabelAttachmentLongPressAction;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *rankTitle;
@property (nonatomic) BOOL isOriginal;
@property (nonatomic) double originalImageWidth;
@property (nonatomic) BOOL isAttributedTitle;
@property (nonatomic) BOOL useHeavyFont;

+ (id)attriTextWithArrow:(id)a0;

- (void)handleTapOnContent:(id)a0;
- (void)handleLongPressOnContent:(id)a0;
- (void)p_generateOriginalImageViewAttachment;
- (void)p_generateBillboardButtonAttachment;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rankTitleRect;
- (id)shorterCraftsmanTitleWithShortCityName:(id)a0 career:(id)a1 billboardType:(id)a2 index:(id)a3;
- (void)p_setupBillboardButton;
- (long long)p_billboardAttachmentContentMode;
- (long long)p_YYTextVerticalAlignment;
- (void)p_setupCraftsmanBillboardButton;
- (void)didClickCraftsmanBillboard:(id)a0;
- (void)onBillboardButtonClicked:(id)a0;
- (void)onTextClicked:(id)a0;
- (void)configShawdowWithShawdowColor:(id)a0 shadowBlurRadius:(double)a1;
- (void)resetRankAttachment;
- (void)setCraftsmanTitle:(id)a0 shortCityName:(id)a1 career:(id)a2 billboardType:(id)a3 index:(id)a4 attachmentAction:(id /* block */)a5;
- (void)setRankString:(id)a0 rankAttributedTitle:(id)a1 attachmentAction:(id /* block */)a2 textLabelAttachmentAction:(id /* block */)a3;
- (void)setRank:(long long)a0 rankAttributedTitle:(id)a1 attachmentAction:(id /* block */)a2;
- (void)setRank:(long long)a0 rankTitle:(id)a1 attachmentAction:(id /* block */)a2;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)init;
- (id)accessibilityElements;
- (BOOL)accessibilityActivate;

@end
