@class UIImageView, UILabel, UIView;

@interface AWEShowPlayletRelatedPanelCell : AWEDCFeedBaseCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *paidIcon;
@property (retain, nonatomic) UIImageView *watchCountIcon;
@property (retain, nonatomic) UIView *tagView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UILabel *watchCountLabel;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subTitle;

+ (double)heightWithCellWidth:(double)a0 awemeModel:(id)a1 context:(id)a2;

- (void)configWithModel:(id)a0 context:(id)a1;
- (id)playletTagText:(id)a0;
- (id)playletTagTextColor:(id)a0;
- (id)playletTagBackgroundColor:(id)a0;
- (id)playletPlayCount:(long long)a0;
- (id)playletContentType:(id)a0;
- (unsigned long long)playletRelatedPanelTagType:(id)a0;
- (id)subTitleForRelatedPanelCard:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
