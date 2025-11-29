@class UIColor, UIImageView, UILabel, AWERelatedVideoMixVideoPlayingCoverView, AWERelatedVideoMixVideoDetailRichAwemeTagView;

@interface AWERelatedVideoMixVideoPanelListCell : UITableViewCell

@property (retain, nonatomic) UIImageView *mixVideoCoverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIImageView *digIcon;
@property (retain, nonatomic) UILabel *playLabel;
@property (retain, nonatomic) AWERelatedVideoMixVideoPlayingCoverView *playingCoverView;
@property (retain, nonatomic) AWERelatedVideoMixVideoDetailRichAwemeTagView *richAwemeTagView;
@property (retain, nonatomic) UIColor *titleLabelTextColor;
@property (retain, nonatomic) UIColor *contentViewBackgroundColor;
@property (retain, nonatomic) UIColor *locatedContentViewBackgroundColor;
@property (retain, nonatomic) UIColor *lineAttributesColor;
@property (retain, nonatomic) UIImageView *picoVRTagView;

- (void)updateAwemeModel:(id)a0;
- (void)setConstDarkMode;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
