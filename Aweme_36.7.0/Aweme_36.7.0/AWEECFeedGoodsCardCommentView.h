@class YYLabel, UIImageView, UIView, UILabel, AWEECFeedGoodsCardModel;

@interface AWEECFeedGoodsCardCommentView : UIView

@property (retain, nonatomic) AWEECFeedGoodsCardModel *model;
@property (retain, nonatomic) UIView *goodCommentCountView;
@property (retain, nonatomic) UIImageView *avatar1;
@property (retain, nonatomic) UIImageView *avatar2;
@property (retain, nonatomic) UILabel *goodCommentCountLabel;
@property (retain, nonatomic) YYLabel *commentLabel;

- (void)updateCommentViewWithProductmodel:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
