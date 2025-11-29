@class MMUIImageView, MMUILabel, MMLiveUserStateItem, MMHeadImageView;
@protocol MMLiveContactTableViewCellDelegate;

@interface MMLiveContactTableViewCell : MMTableViewCell

@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMUILabel *displayNameLabel;
@property (retain, nonatomic) MMUIImageView *arrowImageView;
@property (retain, nonatomic) MMLiveUserStateItem *userItem;
@property (weak, nonatomic) id<MMLiveContactTableViewCellDelegate> cellDelegate;
@property (nonatomic) double seperatorStartX;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)layoutSubviews;
- (void)updateWithUserItem:(id)a0;
- (void)onHeadImageClicked:(id)a0;
- (void).cxx_destruct;

@end
