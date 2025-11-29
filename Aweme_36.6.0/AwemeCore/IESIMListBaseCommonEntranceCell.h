@class UIColor, NSString, UIImageView, UILabel;

@interface IESIMListBaseCommonEntranceCell : UITableViewCell <AWEIMTableViewCellProtocol>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *titleDescriptionLabel;
@property (retain, nonatomic) UIImageView *rightArrowImageView;
@property (retain, nonatomic) UIColor *preferBackgroundColor;
@property (nonatomic) BOOL isMultiselect;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isSearching;
@property (nonatomic) unsigned long long uiStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)setupSubview;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configureWithModel:(id)a0;

@end
