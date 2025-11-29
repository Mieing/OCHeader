@class MMUIButton, WCAdSliderCardItem, NSString, ColorGradientView, WCAdURLImageView, WCAdSliderCardDecorationView, MMUILabel, WCAdSliderCardLogic;

@interface WCAdSliderCardNormalCellView : WCAdSliderCardCellView <IWCAdSliderCardLogicExt>

@property (readonly, nonatomic) WCAdSliderCardItem *sliderCardItem;
@property (retain, nonatomic) WCAdURLImageView *backBorderView;
@property (retain, nonatomic) WCAdURLImageView *frontBorderView;
@property (retain, nonatomic) WCAdSliderCardDecorationView *decorationView;
@property (retain, nonatomic) MMUIButton *buttonView;
@property (retain, nonatomic) WCAdURLImageView *buttonIcon;
@property (retain, nonatomic) MMUILabel *buttonTitle;
@property (retain, nonatomic) MMUILabel *labelTitle;
@property (retain, nonatomic) MMUILabel *labelDesc;
@property (retain, nonatomic) MMUIButton *logoView;
@property (retain, nonatomic) ColorGradientView *colorGradientView;
@property (readonly, nonatomic) WCAdSliderCardLogic *sliderCardLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)getCellContentViewMaskPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createContentContainer;
- (void)initBackBorderView;
- (void)initFrontBorderView;
- (void)initDetailView;
- (void)initButtonView;
- (void)initLogoView;
- (void)updateContentUI;
- (double)updateButtonUI;
- (void)updateLeftViewUI:(double)a0;
- (void)updateColorGradientView;
- (void)updateBorderView;
- (void)updateDecorationViewVisible;
- (id)fetchReportItem;
- (BOOL)shouldDownloadImageUseCDN;
- (BOOL)shouldShowButton;
- (BOOL)shouldShowButtonIcon;
- (BOOL)shouldShowTitle;
- (BOOL)shouldShowDesc;
- (id)createTextViewWithContent:(id)a0 textColor:(id)a1 font:(id)a2 maxWidth:(double)a3;
- (double)calcColorGradientViewHeight;
- (void)onClickButton:(id)a0;
- (void)onOpeningAnimationVisibleStateChanged:(id)a0 contentItemScene:(unsigned long long)a1 isVisible:(BOOL)a2;
- (void).cxx_destruct;

@end
