@class AWEProfileCraftsmanBillboardButton, NSString, UIView, NSAttributedString, AWEProfileBillboardButton;

@interface AWEProfileBillboardLabel : AWEAttachmentLabel

@property (weak, nonatomic) UIView *billboardButton;
@property (retain, nonatomic) AWEProfileBillboardButton *button;
@property (retain, nonatomic) AWEProfileCraftsmanBillboardButton *craftsButton;
@property (retain, nonatomic) NSAttributedString *rankAttributedTitle;
@property (copy, nonatomic) NSString *rankString;
@property (nonatomic) unsigned long long billboardButtonType;
@property (nonatomic) double scaleRate;
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
@property (nonatomic) BOOL shouldOptimizeLineHeight;
@property (readonly, nonatomic) double lineHeight;
@property (nonatomic) BOOL tailGapOptimize;

- (void)handleTapOnContent:(id)a0;
- (void)handleLongPressOnContent:(id)a0;
- (void)p_generateBillboardButtonAttachment;
- (long long)p_billboardAttachmentContentMode;
- (long long)p_YYTextVerticalAlignment;
- (void)didClickCraftsmanBillboard:(id)a0;
- (void)onBillboardButtonClicked:(id)a0;
- (void)onTextClicked:(id)a0;
- (void)resetRankAttachment;
- (void)setCraftsmanTitle:(id)a0 shortCityName:(id)a1 career:(id)a2 billboardType:(id)a3 index:(id)a4 attachmentAction:(id /* block */)a5;
- (void)setRankString:(id)a0 rankAttributedTitle:(id)a1 attachmentAction:(id /* block */)a2 textLabelAttachmentAction:(id /* block */)a3;
- (void)configShadowWithShadowColor:(id)a0 shadowBlurRadius:(double)a1;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)init;
- (id)accessibilityElements;
- (BOOL)accessibilityActivate;

@end
