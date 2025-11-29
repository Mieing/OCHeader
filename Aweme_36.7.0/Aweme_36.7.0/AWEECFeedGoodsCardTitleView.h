@class UIImageView, AWEECFeedGoodsCardModel, UILabel;

@interface AWEECFeedGoodsCardTitleView : UIView

@property (retain, nonatomic) AWEECFeedGoodsCardModel *model;
@property (retain, nonatomic) UIImageView *tagView;
@property (retain, nonatomic) UIImageView *moreView;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)setupUIWithModel:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
