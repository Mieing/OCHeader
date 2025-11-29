@class AWEIMUserViewModel, UIImageView, UILabel, BDImageView;

@interface AWEIMRecommendInvitationUserSelectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) AWEIMUserViewModel *userViewModel;
@property (nonatomic) BOOL isUserSelected;
@property (readonly, nonatomic) BDImageView *avatarImageView;
@property (readonly, nonatomic) UIImageView *selectImageView;
@property (readonly, nonatomic) UILabel *userNameLabel;

- (void)__createComponents;
- (void)__layoutComponents;
- (void)renderModel:(id)a0;
- (void)updateUserSelected:(BOOL)a0;
- (void)toggleUserSelected;
- (void)__setSelectImageWithSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
