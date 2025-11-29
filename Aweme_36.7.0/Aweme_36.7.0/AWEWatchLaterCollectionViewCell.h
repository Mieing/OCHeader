@class CAGradientLayer, DUXRadioBox, UIImageView, NSString, UILabel, UIView, AWEWatchLaterCellProgressView;

@interface AWEWatchLaterCollectionViewCell : UICollectionViewCell <AWECacheVideoCellProtocol>

@property (retain, nonatomic) UIView *coverContainerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *coverLvideoEpisodeTagBackgroundView;
@property (retain, nonatomic) UILabel *coverLvideoEpisodeTag;
@property (retain, nonatomic) UIImageView *bizTypeIcon;
@property (retain, nonatomic) UILabel *totalTimeLabel;
@property (retain, nonatomic) AWEWatchLaterCellProgressView *progressView;
@property (retain, nonatomic) UIView *infoContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *watchTimeLabel;
@property (retain, nonatomic) UIImageView *authorImageView;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) UIImageView *closeButton;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) CAGradientLayer *topMaskLayer;
@property (retain, nonatomic) CAGradientLayer *bottomMaskLayer;
@property (retain, nonatomic) DUXRadioBox *selectRadioBox;
@property (copy, nonatomic) id /* block */ clickCloseB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configLvideoEpisodeTagWithLvideoInfo:(id)a0;
- (struct CGSize { double x0; double x1; })coverContainerViewSize;
- (struct CGSize { double x0; double x1; })authorImageSize;
- (void)didClickCloseButton;
- (void)updateWithModel:(id)a0 type:(unsigned long long)a1 useRecordTime:(BOOL)a2 pageConfig:(id)a3;
- (struct CGSize { double x0; double x1; })closeImageSize;
- (void)updateUIForSidebar;
- (void)updateSelectableCellWithAwemeModel:(id)a0 isSelected:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
