@class AWEPOIAlbumPhotoInfo, UIImageView, AWEGradientView, UILabel, UIView;

@interface AWEPOIAlbumSinglePhoto : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEGradientView *labelMask;
@property (retain, nonatomic) AWEGradientView *photoMask;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *uncheckImageView;
@property (retain, nonatomic) UIView *selectedCellMaskView;
@property (nonatomic) long long photoIndex;
@property (copy, nonatomic) id /* block */ didTap;
@property (retain, nonatomic) AWEPOIAlbumPhotoInfo *photo;
@property (copy, nonatomic) id /* block */ processSelectedStatusChange;

- (void)showMaskViewIfNeed:(id)a0;
- (id)selectImage;
- (void)photoTapAction;
- (void)updateWithModel:(id)a0 selectedStatus:(id)a1;
- (id)unselectImage;
- (void)doSelectStatusChange;
- (void)changeToSelectedStatus;
- (void)changeToUnselectedStatus;
- (void).cxx_destruct;
- (void)layout;
- (id)init;
- (void)setupUI;
- (id)photoImage;

@end
