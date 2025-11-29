@class UIImageView, AWELiveVisibleTypeModel, UILabel, UIView, UIButton;

@interface AWELiveVisiblePanelViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *rightIcon;
@property (retain, nonatomic) UILabel *leftTitle;
@property (retain, nonatomic) UILabel *leftSubTitle;
@property (retain, nonatomic) UIImageView *leftIcon;
@property (retain, nonatomic) UIButton *editButton;
@property (retain, nonatomic) AWELiveVisibleTypeModel *model;
@property (retain, nonatomic) UIView *topSeparator;
@property (copy, nonatomic) id /* block */ editCallback;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)editButtonTapped;
- (void)setup;

@end
