@class UIImageView, AWENearbyGrouponLargeCardRoomProductInfo, UILabel, UIView;

@interface AWENearbyC2FeedLiveLargeCardProductView : UIView

@property (retain, nonatomic) UIImageView *cover;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *price;
@property (retain, nonatomic) UILabel *originPrice;
@property (retain, nonatomic) UIView *originPriceHorizontalLine;
@property (retain, nonatomic) UIView *videoTagView;
@property (retain, nonatomic) UIView *videoTagIcon;
@property (retain, nonatomic) UILabel *videoTagLabel;
@property (retain, nonatomic) AWENearbyGrouponLargeCardRoomProductInfo *roomInfo;

- (void)setUpLayout;
- (void)updateWithProductt:(id)a0;
- (void)configDataWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithProduct:(id)a0;
- (void)tap;
- (void)setUpUI;

@end
