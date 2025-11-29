@class UIView, MMWebImageView, UIImage, NSString, UIImageView, CAGradientLayer, NSMutableArray, MMUILabel, MMUIButton;

@interface MiniTaskCollectionCardCell : MiniTaskCollectionBaseCell <IMiniMizeUserdRecordUpdateExt>

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subtitleLabel;
@property (retain, nonatomic) MMUILabel *footerTextLabel;
@property (retain, nonatomic) MMUILabel *titleTailLabel;
@property (retain, nonatomic) MMUIButton *closeBtn;
@property (retain, nonatomic) MMWebImageView *headerImageView;
@property (retain, nonatomic) UIImageView *subtitleLabelIconImageView;
@property (retain, nonatomic) UIImageView *extraIconImageView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAGradientLayer *longVideoGradientLayer;
@property (retain, nonatomic) UIImage *defaultSnapshot;
@property (retain, nonatomic) NSMutableArray *voiceOverElements;
@property (retain, nonatomic) UIView *frontView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightForWidth:(double)a0;
+ (double)titleAreaHeight;

- (void)adjustFrontViewYWithCollectionContentOffsetY:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })menuPopoverFrame;
- (void)initContentView;
- (void)initSubviews;
- (void)initSnapshotView;
- (void)initGradientLayer;
- (void)initlongVideoGradientLayer;
- (void)initCloseBtn;
- (void)initTitleArea;
- (void)setViewModel:(id)a0;
- (void)layoutSubviews;
- (void)layoutTitleLabels;
- (void)onCloseBtnClicked;
- (void)initVoiceOverElements;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:(id)a0;
- (id)accessibilityLabelForCell;
- (id)accessibilityLabelForCloseBtn;
- (id)subtitleLabelIconImageForBizType:(id)a0;
- (id)extraIconForBizName:(id)a0;
- (BOOL)isTheOnlyCell;
- (double)widthForTitileTailLabel;
- (void).cxx_destruct;

@end
