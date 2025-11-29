@class NSString, UIImageView, UIImage, UILabel;

@interface ACCEditTagsUserTableViewCell : UITableViewCell <ACCTagsItemPickerTableViewCellProtocol>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *verificationDescriptionLabel;
@property (retain, nonatomic) UIImageView *verificationIcon;
@property (retain, nonatomic) UIImage *placeHolderImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
