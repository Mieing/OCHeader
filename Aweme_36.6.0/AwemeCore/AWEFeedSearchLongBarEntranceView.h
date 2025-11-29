@class UIImageView, NSDictionary, UILabel, UIView, UIButton;

@interface AWEFeedSearchLongBarEntranceView : UIView

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *searchIconView;
@property (retain, nonatomic) UIImageView *triangleIconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIButton *scanBtn;
@property (retain, nonatomic) UIButton *searchBtn;
@property (retain, nonatomic) UIView *line;
@property (nonatomic) BOOL enableSkyLight;
@property (copy, nonatomic) NSDictionary *config;
@property (copy, nonatomic) id /* block */ searchBtnClickedBlock;
@property (copy, nonatomic) id /* block */ scanBtnClickedBlock;

- (void)updateSuggestWords:(id)a0;
- (BOOL)isTopSearch;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enableSkyLight:(BOOL)a1 config:(id)a2;
- (void)addSubiews;
- (unsigned long long)searchLongBarEntranceStyle;
- (double)searchLongBarEntranceBgAlpha;
- (void)scanBtnClicked;
- (void)searchBtnClicked;
- (void).cxx_destruct;

@end
