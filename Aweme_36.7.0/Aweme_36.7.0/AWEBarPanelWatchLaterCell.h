@class AWEFeedInsetsLabel, UIView, NSString, UIImageView, AWEGradientView, AWEWatchLaterFinishWatchingSeparateView, AWEWatchLaterCellProgressView, UILabel;

@interface AWEBarPanelWatchLaterCell : UICollectionViewCell <AWEBarPanelCellProtocol>

@property (retain, nonatomic) UIView *coverContainerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEFeedInsetsLabel *tipLabel;
@property (retain, nonatomic) AWEWatchLaterCellProgressView *progressView;
@property (retain, nonatomic) AWEGradientView *coverLvideoTopAWEGradient;
@property (retain, nonatomic) UIView *coverLvideoEpisodeTagBackgroundView;
@property (retain, nonatomic) UILabel *coverLvideoEpisodeTag;
@property (retain, nonatomic) UIView *infoContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *watchTimeLabel;
@property (retain, nonatomic) UIImageView *authorImageView;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) UIImageView *digImageView;
@property (retain, nonatomic) UILabel *digLabel;
@property (retain, nonatomic) UIImageView *chooseButton;
@property (retain, nonatomic) UIImageView *typeIcon;
@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) AWEWatchLaterFinishWatchingSeparateView *separateView;
@property (nonatomic) BOOL isManageMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEBrandColorAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (id)aAWEBrandColorAdapter;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)configLvideoEpisodeTagWithLvideoInfo:(id)a0;
- (void)updateWithModel:(id)a0 needManageMode:(BOOL)a1 useRecordTime:(BOOL)a2;
- (void)switchToLocated:(BOOL)a0;
- (void)switchToManageSelected:(BOOL)a0;
- (void)showSeparateView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
