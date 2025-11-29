@class NSString, UIImageView, AWEIMHighlyProspectiveRecommendUserModel, UILabel, UIButton;
@protocol AWEIMHighlyProspectiveRecommendTableViewCellDelegate;

@interface AWEIMHighlyProspectiveRecommendTableViewCell : UITableViewCell <AWEIMRendererProtocol>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *contactButton;
@property (retain, nonatomic) UIImageView *removeImageView;
@property (retain, nonatomic) AWEIMHighlyProspectiveRecommendUserModel *model;
@property (weak, nonatomic) id<AWEIMHighlyProspectiveRecommendTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)__setupUI;
- (void)__setupLayout;
- (void)__handleAvatarImageViewClicked;
- (void)__handleContactButtonClicked;
- (void)__handleRemoveImageViewClicked;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
