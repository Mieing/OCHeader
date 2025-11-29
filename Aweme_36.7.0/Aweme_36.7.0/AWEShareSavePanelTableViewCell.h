@class NSArray, NSString, UILabel, UIView, AWEShareSavePanelViewModel;
@protocol AWEShareSaveTableViewCellDelegate, AWEShareSavePanelTableViewCellDelegate;

@interface AWEShareSavePanelTableViewCell : UITableViewCell <AWEShareSaveTableViewCellProtocol>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (copy, nonatomic) NSArray *actionButtons;
@property (retain, nonatomic) AWEShareSavePanelViewModel *viewModel;
@property (weak, nonatomic) id<AWEShareSavePanelTableViewCellDelegate> delegate;
@property (weak, nonatomic) id<AWEShareSaveTableViewCellDelegate> shareDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (void).cxx_destruct;
- (void)actionButtonTapped:(id)a0;
- (void)updateWithViewModel:(id)a0;

@end
