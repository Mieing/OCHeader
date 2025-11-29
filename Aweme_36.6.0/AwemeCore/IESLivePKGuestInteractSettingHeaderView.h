@class UILabel, UIButton, UIView;

@interface IESLivePKGuestInteractSettingHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIView *normalContentContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIView *paidQueueContainer;
@property (nonatomic) BOOL hasMoreButton;
@property (copy, nonatomic) id /* block */ didClick;
@property (nonatomic) BOOL enablePaidQueue;

- (void)p_moreButtonDidTap;
- (void)p_refreshPaidQueueView;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)updateWithTitle:(id)a0;

@end
