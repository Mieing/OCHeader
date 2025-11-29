@class AWEAnchorCellConfig, NSString, UIImageView, UILabel, AWEAnchorAdditionCellModel, UIButton;

@interface AWEAnchorAdditionBaseCell : UITableViewCell <AWEAnchorAdditionCellProtocol>

@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *markLabel;
@property (retain, nonatomic) UIButton *addButton;
@property (retain, nonatomic) AWEAnchorAdditionCellModel *cellModel;
@property (copy, nonatomic) id /* block */ addBlock;
@property (copy, nonatomic) id /* block */ deleteBlock;
@property (retain, nonatomic) AWEAnchorCellConfig *cellConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anchorAdditionCellIdentifier;
+ (double)anchorAdditionCellForHeight;

- (void)setupUIConfig;
- (void)addAnchorTapped:(id)a0;
- (id)customAddButton:(id)a0;
- (void)deleteAnchorTapped:(id)a0;
- (void)updateUIWithCellModel:(id)a0 editMode:(BOOL)a1;
- (BOOL)shouldShowMarkWithCellModel:(id)a0;
- (void)updateUIWithCellModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupSubviews;

@end
