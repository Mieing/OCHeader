@class NSString, UIImageView, UIImage, UILabel, UIView;

@interface ACCEditTagsCommodityTableViewCell : UITableViewCell <ACCTagsItemPickerTableViewCellProtocol>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UILabel *tagsCountLabel;
@property (retain, nonatomic) UIView *tagContainer;
@property (retain, nonatomic) UIImage *placeHolderImage;
@property (retain, nonatomic) UIView *iconContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
