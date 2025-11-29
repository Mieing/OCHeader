@class UIView, MMWebImageView, UISwitch, NSString, UIImageView, UIButton, RichTextView, MMUILabel;

@interface MMFinderLiveMoreFunctionSwitchCell : MMFinderLiveMoreFunctionBaseCell <ILinkEventExt>

@property (retain, nonatomic) UIView *functionContentView;
@property (retain, nonatomic) MMUILabel *tipLabel;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) RichTextView *detailLabel;
@property (retain, nonatomic) MMUILabel *moneyLabel;
@property (retain, nonatomic) UISwitch *functionSwitch;
@property (retain, nonatomic) UIImageView *arrowImgView;
@property (retain, nonatomic) UIView *sepelateLine;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) MMWebImageView *rightImageView;
@property (retain, nonatomic) UIButton *disabledSwitchButton;
@property (nonatomic) BOOL showSepLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateCellWithItem:(id)a0;
- (void)layoutSubviews;
- (void)applyHighlightAnimation;
- (void)createUI;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutUI;
- (void)layoutWithDetailReminderType;
- (void)layoutWithAmountReminderType;
- (void)layoutWithCommentType;
- (void)layoutWithImageType;
- (void)layoutWithChooseTextType;
- (void)layoutWithDefaultType;
- (void)layoutWithDetailType;
- (void)layoutWithUnknownType;
- (void)layoutRedDotIfNeeded;
- (void)updateDetailLabelfWidth:(double)a0;
- (BOOL)checkNeedShowDisabledSwitchbutton;
- (void)switchDidChanged:(id)a0;
- (BOOL)canShowSepelateLine;
- (void)updateCellWithRectCorner:(unsigned long long)a0;
- (void)cleanLayer;
- (void)onDisabledSwitchButtonClicked:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
