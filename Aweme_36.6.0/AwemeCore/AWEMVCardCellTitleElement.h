@class UILabel, AWEMVCardCellElementUIConfig;

@interface AWEMVCardCellTitleElement : AWEDCFeedBaseCellElement

@property (retain, nonatomic) AWEMVCardCellElementUIConfig *uiConfig;
@property (retain, nonatomic) AWEMVCardCellElementUIConfig *prevUIConfig;
@property (retain, nonatomic) UILabel *titleLabel;

+ (BOOL)canShowWithAwemeModel:(id)a0 context:(id)a1;
+ (double)heightWithCellWidth:(double)a0 awemeModel:(id)a1 context:(id)a2;
+ (double)lastBottomMargin;
+ (id)elementUIConfigInCardType:(unsigned long long)a0;
+ (id)bigCardUIConfig;
+ (id)smallCardUIConfig;
+ (id)titleLabelColorWithContext:(id)a0;
+ (id)attributeTitleWithText:(id)a0 font:(id)a1 forCalculate:(BOOL)a2;
+ (double)bottomMargin;

- (void)configWithModel:(id)a0 context:(id)a1;
- (void)themeDidChange:(long long)a0;
- (void)setupGesture;
- (void)titleElementClicked;
- (void)updateUIConstraints;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)reset;

@end
