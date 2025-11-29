@class UIImageView, IESECFeedSearchWordModel, UILabel, UIView;

@interface IESECGoodsInternalFeedSearchBannerView : UIView

@property (retain, nonatomic) UIView *searchView;
@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UILabel *topicLabel;
@property (retain, nonatomic) UILabel *searchLabel;
@property (retain, nonatomic) UIImageView *rightIcon;
@property (retain, nonatomic) IESECFeedSearchWordModel *model;

- (void)setupUIWithModel:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
