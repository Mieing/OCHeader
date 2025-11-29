@class UIImageView, UILabel, UIView;

@interface AFDNewSchoolStoryFeedCellAlbumBadgeView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *textLabel;

- (void)updateWithIndex:(unsigned long long)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
