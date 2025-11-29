@class UIButton, UIImageView, DUXButton, UILabel, UIView, AWEMusicDetailHeaderTitleLabel;
@protocol AWEDetailTrendMusicItemCellDelegate;

@interface AWEDetailTrendMusicItemCollectionViewCell : UICollectionViewCell

@property (nonatomic) BOOL needMaskCover;
@property (retain, nonatomic) UIView *titleArrowContainerView;
@property (retain, nonatomic) UIImageView *titleArrowIconView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *coverBgView;
@property (retain, nonatomic) UIImageView *playImageView;
@property (retain, nonatomic) UIImageView *lunaIconImageView;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) AWEMusicDetailHeaderTitleLabel *musicTitleLabel;
@property (retain, nonatomic) UIView *musicInfoTapAreaView;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (retain, nonatomic) UIButton *lunaUGButton;
@property (retain, nonatomic) DUXButton *collectIconButton;
@property (retain, nonatomic) UIButton *lunaAppendPlaylistButton;
@property (retain, nonatomic) UIButton *collectButton;
@property (retain, nonatomic) UIImageView *coverImageSkeletonView;
@property (retain, nonatomic) UIView *musicInfoSkeletonView;
@property (weak, nonatomic) id<AWEDetailTrendMusicItemCellDelegate> delegate;

+ (id)cellIdentify;

- (void)_stopPlayImageIconLoading;
- (void)_startPlayImageIconLoading;
- (void)removeAllSubViews;
- (void)updateWhenPlayStatusDidChanged:(long long)a0;
- (void)didTapCoverImageView:(id)a0;
- (void)didTapPlayImageView:(id)a0;
- (void)didTapAuthorLabel:(id)a0;
- (void)didTapTitle:(id)a0;
- (void)didTapMusicInfoAreaView:(id)a0;
- (void)didTapLunaUgButton:(id)a0;
- (void)didTapLunaAppendPlaylistButton:(id)a0;
- (void)didTapCollectButton:(id)a0;
- (void)configWithItemViewModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
