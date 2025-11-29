@class UIImageView, UILabel;

@interface IESLiveVSFeedChainMatchCell : IESLiveVSFeedChainCell

@property (retain, nonatomic) UIImageView *matchBackgroundView;
@property (retain, nonatomic) UIImageView *leftIconView;
@property (retain, nonatomic) UIImageView *rightIconView;
@property (retain, nonatomic) UILabel *leftNameLabel;
@property (retain, nonatomic) UILabel *rightNameLabel;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *matchTitleLabel;

- (void)matchHasPoint;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setupSubviews;

@end
