@class UIImageView, PAGView, UIView, UILabel, MMFinderLiveConnectMicUser;

@interface MMFinderLiveMicTalkingUsersCollectionCell : UICollectionViewCell

@property (nonatomic) BOOL isSmallMode;
@property (retain, nonatomic) MMFinderLiveConnectMicUser *micUser;
@property (retain, nonatomic) UIView *infoContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *audioIconView;
@property (retain, nonatomic) PAGView *volumeAnimationView;

+ (id)identifier;
+ (double)cellLabelTextFontSize:(BOOL)a0;

- (void)layoutSubviews;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
