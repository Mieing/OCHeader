@class UILabel, AWEMVCardCellElementUIConfig;

@interface AWEMVCardCellSubtitleElement : AWEDCFeedBaseCellElement

@property (retain, nonatomic) AWEMVCardCellElementUIConfig *uiConfig;
@property (retain, nonatomic) AWEMVCardCellElementUIConfig *prevUIConfig;
@property (retain, nonatomic) UILabel *subtitleLabel;

+ (BOOL)canShowWithAwemeModel:(id)a0 context:(id)a1;
+ (double)heightWithCellWidth:(double)a0 awemeModel:(id)a1 context:(id)a2;
+ (double)lastBottomMargin;
+ (id)titleWithAwemeModel:(id)a0 context:(id)a1;
+ (id)elementUIConfigInCardType:(unsigned long long)a0;
+ (id)bigCardUIConfig;
+ (id)smallCardUIConfig;
+ (id)titleLabelColorWithContext:(id)a0;
+ (double)bottomMargin;

- (void)configWithModel:(id)a0 context:(id)a1;
- (void)themeDidChange:(long long)a0;
- (void)updateUIConstraits;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)reset;

@end
