@class BDImageView, AWESearchMusicHeaderInfoModel, DUXBaseButton, CATextLayer;
@protocol AWESearchMusicPlayAllViewDelegate;

@interface AWESearchMusicPlayAllViewCell : DUXBaseTableViewCell

@property (retain, nonatomic) BDImageView *playIcon;
@property (retain, nonatomic) CATextLayer *titleLabel;
@property (retain, nonatomic) DUXBaseButton *playButton;
@property (retain, nonatomic) AWESearchMusicHeaderInfoModel *model;
@property (weak, nonatomic) id<AWESearchMusicPlayAllViewDelegate> delegate;
@property (nonatomic) long long renderType;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)configUI;
- (BOOL)isUseCachalotSearchMusic;
- (double)getRealScreenWidth;
- (void)updateSubViewFrame;
- (void)playAllButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
