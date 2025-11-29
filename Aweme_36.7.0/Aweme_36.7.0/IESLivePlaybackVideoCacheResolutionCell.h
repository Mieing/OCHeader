@class UILabel, IESLivePlaybackVideoCacheResolution;

@interface IESLivePlaybackVideoCacheResolutionCell : UITableViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) IESLivePlaybackVideoCacheResolution *resolution;

+ (BOOL)isLandscape;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)p_commonInit;

@end
