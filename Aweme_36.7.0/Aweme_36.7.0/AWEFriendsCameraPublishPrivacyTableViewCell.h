@class NSString, AWEVideoPublishViewModel, UIView, UIButton;

@interface AWEFriendsCameraPublishPrivacyTableViewCell : AWENewPublishTableCell <AWEPublishPrivateTableCellProtocol>

@property (retain, nonatomic) UIView *privacySelectContainerView;
@property (retain, nonatomic) UIButton *lastChoiceButton;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSubviewsForContentView;
- (void)configWithPublishViewModel:(id)a0;
- (void)addBadge;
- (void)p_clickLastChoiceButton;
- (void)updateLastChoiceButtonTitle:(id)a0;
- (void)updateLastChoiceButtonHidden:(BOOL)a0;
- (void).cxx_destruct;

@end
