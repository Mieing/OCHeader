@class BDPSwitch, UIView;
@protocol BDPGameSubscribeTableViewCellDelegate;

@interface BDPGameSubscribeTableViewCell : UITableViewCell

@property (weak, nonatomic) id<BDPGameSubscribeTableViewCellDelegate> delegate;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) BDPSwitch *switchView;

- (void)onTapSwitch:(id)a0;
- (long long)tagWithIndexPath:(id)a0;
- (void)updateCell:(id)a0 indexPath:(id)a1 shouldShowSeparate:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)setupTitleLabel;

@end
