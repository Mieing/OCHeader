@class UIStackView, UIImageView, UILabel, AWEIMRefreshImageView;

@interface AWEIMFeedInfoCardView : UIView

@property (retain, nonatomic) AWEIMRefreshImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playIcon;
@property (retain, nonatomic) UIStackView *titleContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *invisibleLabel;

- (void)refreshWithModel:(id)a0;
- (void)p_setupConstraints;
- (void)p_addSubViews;
- (void)p_setupUIWithConfig:(id)a0;
- (void)refreshInvisible:(id)a0;
- (void)p_createPlayIcon;
- (void)p_createInvisibleLabel;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
