@class UIButton, AWEIMMyFansGroupInfoViewModel, NSString;
@protocol AWEIMMyFansGroupInfoCardStyleCollectionViewCellDelegate;

@interface AWEIMMyFansGroupInfoCardStyleCollectionViewCell : AWEIMFansGroupCardStyleCollectionViewCell

@property (retain, nonatomic) UIButton *inviteButton;
@property (weak, nonatomic) id<AWEIMMyFansGroupInfoCardStyleCollectionViewCellDelegate> delegate;
@property (retain, nonatomic) AWEIMMyFansGroupInfoViewModel *viewModel;
@property (copy, nonatomic) NSString *previousPage;

+ (id)identifier;

- (void)__updateUI;
- (void)__trackInviteFansClicked;
- (void)__inviteButtonClicked;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;

@end
