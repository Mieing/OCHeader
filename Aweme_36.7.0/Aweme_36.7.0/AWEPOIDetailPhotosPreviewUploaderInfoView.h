@class AWEPOITrackerManager, UIImageView, UILabel, MASConstraint, AWEPOIPhotoUploaderInfoModel;

@interface AWEPOIDetailPhotosPreviewUploaderInfoView : UIView

@property (retain, nonatomic) UIImageView *userAvatar;
@property (retain, nonatomic) MASConstraint *userNameLabelToAvatarConstraints;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) AWEPOIPhotoUploaderInfoModel *uploader;
@property (weak, nonatomic) AWEPOITrackerManager *trackerManager;

- (void)tapUserAvatar;
- (void)tapUserNameLabel;
- (void)goToUserProfileViaMethod:(id)a0;
- (void)updateWithUploaderInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end
