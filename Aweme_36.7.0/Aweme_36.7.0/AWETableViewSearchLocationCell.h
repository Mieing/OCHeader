@class YYLabel, AWETextImageView, UIImageView, UILabel, UIView, AWEPOIInfoModel;

@interface AWETableViewSearchLocationCell : UITableViewCell

@property (weak, nonatomic) AWEPOIInfoModel *model;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UILabel *searchTagLabel;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) YYLabel *tagLabel;
@property (retain, nonatomic) AWETextImageView *textImageView;
@property (retain, nonatomic) AWETextImageView *searchRightConfLabel;
@property (retain, nonatomic) UIImageView *selectedImgView;
@property (retain, nonatomic) UILabel *separateLabel;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UILabel *locationLabel;
@property (copy, nonatomic) id /* block */ showGuessTagTrack;
@property (copy, nonatomic) id /* block */ cpsRewardTapBlock;

+ (id)identifier;

- (void)p_addSubviews;
- (void)setupDefaultStyle;
- (void)setPoiSelected:(BOOL)a0;
- (void)configWithHideDistanceWhenSearching:(BOOL)a0 isAddStore:(BOOL)a1 item:(id)a2 searchKeyword:(id)a3 style:(unsigned long long)a4;
- (void)handleTapCPSRewardView;
- (double)detailLabelHeight;
- (void)setupStyle:(unsigned long long)a0;
- (void)setHighlightedPOILabel:(id)a0 text:(id)a1 keyword:(id)a2 color:(id)a3;
- (void)setupFocusDistanceStyle;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
