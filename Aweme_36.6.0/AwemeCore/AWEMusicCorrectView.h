@class ACCMusicUIThemeModel, UILabel, UIView, YYLabel;
@protocol AWESearchCorrectModelProtocol;

@interface AWEMusicCorrectView : UICollectionReusableView

@property (retain, nonatomic) YYLabel *keywordLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *lineView;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (retain, nonatomic) id<AWESearchCorrectModelProtocol> model;
@property (retain, nonatomic) ACCMusicUIThemeModel *themeModel;

- (void)configureUI;
- (void)viewTapped;
- (id)initWithCorrectModel:(id)a0;
- (void)configureData;
- (void)addSearchEntranceForAttributedText:(id)a0;
- (id)lineViewBackgroundColor;
- (id)hightColor;
- (void)caculateFrame;
- (double)caculateHeightForYYLabel:(id)a0;
- (void).cxx_destruct;
- (id)linkColor;
- (id)defaultColor;
- (double)maxLabelWidth;

@end
