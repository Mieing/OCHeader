@class UIImageView, UILabel, UIView, AWEIMPoiItem;

@interface AWEIMShareLocationTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UIView *distanceLine;
@property (retain, nonatomic) AWEIMPoiItem *poiItem;

- (void)updateSelected:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)updateModel:(id)a0;

@end
