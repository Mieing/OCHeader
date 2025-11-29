@class BDPPermissionItem, NSString, UISwitch, NSIndexPath, UILabel, UIView, BDPUniqueID;

@interface BDPPermissionTableViewCell : UITableViewCell

@property (retain, nonatomic) UISwitch *openSwitch;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *sparatorLine;
@property (retain, nonatomic) BDPPermissionItem *item;
@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL shouldAddDivideLine;
@property (retain, nonatomic) NSIndexPath *indexPath;

- (long long)tagWithIndexPath:(id)a0;
- (void)openSwitchClicked:(id)a0;
- (id)indexPathWithTag:(long long)a0;
- (void)updateWithScopeItem:(id)a0 appId:(id)a1 uniqueID:(id)a2 shouldAddDivideLine:(BOOL)a3 indexPath:(id)a4;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
