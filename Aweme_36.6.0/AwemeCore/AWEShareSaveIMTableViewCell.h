@class AWEShareSaveIMViewModel, UIImageView, AWEButton, UILabel, UIView, NSString;
@protocol AWEShareSaveTableViewCellDelegate;

@interface AWEShareSaveIMTableViewCell : UITableViewCell <AWEShareSaveTableViewCellProtocol>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *onlineDotView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *sendLabel;
@property (retain, nonatomic) UIImageView *sendImageView;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) AWEButton *sendButton;
@property (retain, nonatomic) AWEShareSaveIMViewModel *viewModel;
@property (copy, nonatomic) NSString *uniqueFlag;
@property (weak, nonatomic) id<AWEShareSaveTableViewCellDelegate> shareDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithHasSendMsg:(BOOL)a0 animated:(BOOL)a1;
- (void)sendButtonClicked:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithViewModel:(id)a0;
- (void)updateActiveStatus;

@end
