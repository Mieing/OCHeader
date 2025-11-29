@class NSString, UIImageView, AWEAwemeModel, UILabel, AWEAnchorInfoModel;

@interface AWEGeneralWaterfallAnchor : UIView

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEAnchorInfoModel *anchorModel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSString *searchKeyword;

+ (double)heightForModel:(id)a0;

- (void)didStartShowing;
- (void)singleTapped:(id)a0;
- (void)setForceTheme:(long long)a0;
- (long long)visualSearchCardUiStyle;
- (double)getIconSize:(double)a0;
- (id)getAnchorIconURLList;
- (id)getAnchorIconImage;
- (id)getAnchorText;
- (BOOL)showNewLargeFontStyle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
