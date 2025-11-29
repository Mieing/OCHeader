@class UIImageView, UILabel, FeedItem;

@interface AWEFeedLiveTabHistoryCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) FeedItem *cellModel;
@property (copy, nonatomic) id /* block */ historyDidClicked;

+ (id)reuseIdentifier;

- (void)configWithCellModel:(id)a0;
- (void)clickHistory:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
