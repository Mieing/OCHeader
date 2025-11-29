@class AWEGeneralSearchPOIAnchorInfoModel, NSString, UIImageView, AWEAwemeModel, YYLabel;

@interface AWEGeneralWaterfallPoiBaseAnchor : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) YYLabel *titleYYLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEGeneralSearchPOIAnchorInfoModel *anchorInfoModel;
@property (copy, nonatomic) NSString *searchKeyword;

+ (id)verticalLine;
+ (double)heightForModel:(id)a0;

- (void)didStartShowing;
- (id)p_getTrackParams;
- (void)singleTapped:(id)a0;
- (void)setForceTheme:(long long)a0;
- (id)getAnchorIconURLList;
- (id)getAnchorIconImage;
- (id)getAnchorText;
- (BOOL)isLocalImage;
- (id)getLifeAnchorType;
- (void)jumpToDetailPage;
- (id)anchorTypeForStatistics;
- (id)p_getLifeTrackParams;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;
- (id)getScene;

@end
