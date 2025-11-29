@class AWESearchCorrectModel, AWESearchBackgroundView, UIView, AWESearchCorrectViewUIConfig, YYLabel;

@interface AWESearchCorrectView : UICollectionReusableView

@property (retain, nonatomic) AWESearchCorrectModel *model;
@property (retain, nonatomic) YYLabel *keywordLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWESearchBackgroundView *backgroundView;
@property (weak, nonatomic) UIView *parentContainer;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (nonatomic) unsigned long long theme;
@property (nonatomic) BOOL shouldShowDivideLine;
@property (retain, nonatomic) AWESearchCorrectViewUIConfig *uiConfig;
@property (nonatomic) BOOL enableAlphaBackground;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (id)identifier;

- (void)configureUI;
- (void)viewTapped;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)initWithCorrectModel:(id)a0;
- (void)configureData;
- (void)configKeyword;
- (double)heightOfKeywordLabel;
- (void)addSearchEntranceForAttributedText:(id)a0;
- (void)updateImmersiveBackgroundViewFrame;
- (void)attachBackgroundView:(BOOL)a0 container:(id)a1;
- (void)updateSearchBackground:(id)a0 hidden:(BOOL)a1 theme:(unsigned long long)a2 enableAlphaBackground:(BOOL)a3 container:(id)a4;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)defaultColor;
- (void)updateWithModel:(id)a0;
- (double)maxLabelWidth;

@end
