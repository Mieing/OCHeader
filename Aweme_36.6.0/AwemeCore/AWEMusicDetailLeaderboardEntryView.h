@class UIImageView, UILabel, AWEMusicDetailLeaderBoardConfig;
@protocol AWEMusicDetailLeaderboardEntryViewDelegate;

@interface AWEMusicDetailLeaderboardEntryView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) AWEMusicDetailLeaderBoardConfig *config;
@property (weak, nonatomic) id<AWEMusicDetailLeaderboardEntryViewDelegate> delegate;

- (void)updateWithRank:(long long)a0 description:(id)a1;
- (void)remakeRightAndHeightLayoutConstraintWithHeight:(double)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupViews;
- (void)handleTap:(id)a0;

@end
