@class UIImageView, UILabel, AFDCloseFriendsSpecificationItemModel;

@interface AFDCloseFriendsSpecificationItemView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AFDCloseFriendsSpecificationItemModel *model;
@property (nonatomic) double contentHeight;

- (id)initWithConfigModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
