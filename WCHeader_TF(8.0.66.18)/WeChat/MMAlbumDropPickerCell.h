@class NSString, UIImageView, UIView, MMUILabel;

@interface MMAlbumDropPickerCell : UITableViewCell

@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) UIView *bgContentView;
@property (retain, nonatomic) UIImageView *headImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *countLabel;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) NSString *albumId;

+ (id)cellInTableView:(id)a0 album:(id)a1 name:(id)a2 isSelected:(BOOL)a3;
+ (double)height;

- (void)updateWithImage:(id)a0 title:(id)a1 count:(long long)a2 isSelected:(BOOL)a3;
- (void)updateWithImage:(id)a0;
- (void)updateWithPhotoCount:(long long)a0;
- (void)awakeFromNib;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)layout;
- (void).cxx_destruct;

@end
