@class UIButton, UIImageView, AWEIMInsetsLabel, UILabel, AWEIMRefreshImageView;

@interface AWEIMShareLongVideoCardView : UIView

@property (retain, nonatomic) UIImageView *maskImageView;
@property (retain, nonatomic) AWEIMInsetsLabel *videoTagLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *episodeSeqLabel;
@property (retain, nonatomic) AWEIMInsetsLabel *episodeTypeLabel;
@property (retain, nonatomic) UILabel *episodeTagLabel;
@property (retain, nonatomic) UIImageView *playIcon;
@property (retain, nonatomic) AWEIMRefreshImageView *coverImageView;
@property (retain, nonatomic) UIButton *startTimeDescButton;

+ (struct CGSize { double x0; double x1; })sizeForView;

- (void)addSubviews;
- (id)tagText:(id)a0;
- (void)makeMaskViewLayout;
- (void)makeVideoTagLayout;
- (void)makeEpisodeTypeLabelLayout;
- (void)makeEpisodeTagLabelLayout;
- (void)makeEpisodeSeqLabelLayout;
- (BOOL)enableLongVideoCardOpt;
- (id)tagBackgroudColor:(id)a0;
- (id)tagTextColor:(id)a0;
- (void)updateVideoTagLabel:(id)a0 title:(id)a1 score:(id)a2 episodeSeq:(id)a3 episodeType:(id)a4 categoryString:(id)a5;
- (void)updateLongCategoryLabelWithString:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addConstraints;
- (void)updateWithModel:(id)a0;

@end
