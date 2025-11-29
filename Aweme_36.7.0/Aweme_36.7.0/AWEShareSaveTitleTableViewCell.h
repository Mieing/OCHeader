@class UILabel, NSString;
@protocol AWEShareSaveTableViewCellDelegate;

@interface AWEShareSaveTitleTableViewCell : UITableViewCell <AWEShareSaveTableViewCellProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) id<AWEShareSaveTableViewCellDelegate> shareDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithViewModel:(id)a0;

@end
