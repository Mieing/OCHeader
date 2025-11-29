@class FavAttributeCPLabel, UIImageView, UIView;

@interface WCFinderPOIRelatedListHalfTableViewCell : UITableViewCell

@property (retain, nonatomic) FavAttributeCPLabel *titleLabel;
@property (retain, nonatomic) FavAttributeCPLabel *detailLabel;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubView;
- (void)updateUIWithPOIDetail:(id)a0 isHiddenLine:(BOOL)a1;
- (void)updateUIMargin;
- (void).cxx_destruct;

@end
