@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface WXGRoamSelectDeviceCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *blockView;
@property (nonatomic) double cellHeight;
@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isPortable;
@property (nonatomic) BOOL isAddCell;
@property (retain, nonatomic) UILabel *portablePathLabel;
@property (retain, nonatomic) UIButton *removeBtn;
@property (copy, nonatomic) id /* block */ reloadBlock;
@property (copy, nonatomic) NSString *portablePath;

- (void)setupViews;
- (void)onDeletePortablePath;
- (void).cxx_destruct;

@end
