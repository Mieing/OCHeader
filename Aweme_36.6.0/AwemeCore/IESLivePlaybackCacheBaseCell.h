@class IESLivePlaybackCacheVideoProgressView, MASConstraint, UIImageView, IESVSVideoCacheCellModel, UILabel, UIView, UIButton;
@protocol IESLiveWebPPlayer;

@interface IESLivePlaybackCacheBaseCell : UITableViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *leftSizeLabel;
@property (retain, nonatomic) UIImageView *accessoryImageView;
@property (retain, nonatomic) UIView *coverDarkView;
@property (retain, nonatomic) UIButton *cachedLabel;
@property (retain, nonatomic) UILabel *rightSizeLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) IESLivePlaybackCacheVideoProgressView *progressView;
@property (retain, nonatomic) UIButton *watchedButton;
@property (retain, nonatomic) UIImageView *statusView;
@property (retain, nonatomic) UIView<IESLiveWebPPlayer> *playingView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) MASConstraint *titleTopConstraint;
@property (retain, nonatomic) IESVSVideoCacheCellModel *cellModel;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (BOOL)showCancelButton:(unsigned long long)a0;
- (BOOL)showLeftSizeLabel:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)p_commonInit;

@end
