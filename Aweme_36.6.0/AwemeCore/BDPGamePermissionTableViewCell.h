@class BDPSwitch, NSString, UIView;
@protocol BDPGamePermissionTableViewCellDelegate;

@interface BDPGamePermissionTableViewCell : UITableViewCell

@property (nonatomic) long long itemType;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) BDPSwitch *switchView;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) UIView *buttonView;
@property (weak, nonatomic) id<BDPGamePermissionTableViewCellDelegate> delegate;

+ (id)cellForItem:(id)a0 tableView:(id)a1;

- (void)setupDefaultItem:(id)a0 indexPath:(id)a1;
- (void)setupTitleAndDescriptionItem:(id)a0 indexPath:(id)a1;
- (void)setupSwitchViewButtonWithItem:(id)a0 indexPath:(id)a1;
- (void)setupJumpLinkButtonWithItem:(id)a0 indexPath:(id)a1;
- (void)onTapSwitch:(id)a0;
- (long long)tagWithIndexPath:(id)a0;
- (void)onTapJumpLink:(id)a0;
- (void)updateWithItem:(id)a0 indexPath:(id)a1 shouldShowSeparate:(BOOL)a2;
- (void).cxx_destruct;

@end
