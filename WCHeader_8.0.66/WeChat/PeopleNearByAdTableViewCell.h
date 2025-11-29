@class UIImageView, UILabel, MMUIButton;
@protocol PeopleNearByAdTableViewCellDelegate;

@interface PeopleNearByAdTableViewCell : MMTableViewCell

@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (weak, nonatomic) id<PeopleNearByAdTableViewCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithLbsAdInfo:(id)a0 withHeaderView:(id)a1;
- (void)closeButtonPressed;
- (void)layoutSubviews;
- (void)relayout;
- (void).cxx_destruct;

@end
