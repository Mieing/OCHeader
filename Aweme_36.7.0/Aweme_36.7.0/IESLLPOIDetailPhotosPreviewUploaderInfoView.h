@class IESLLPOIPhotoUploaderInfoModel, UIImageView, UILabel, MASConstraint;
@protocol IESLLFusePOITrackerManagerProtocol;

@interface IESLLPOIDetailPhotosPreviewUploaderInfoView : UIView

@property (retain, nonatomic) UIImageView *userAvatar;
@property (retain, nonatomic) MASConstraint *userNameLabelToAvatarConstraints;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) IESLLPOIPhotoUploaderInfoModel *uploader;
@property (weak, nonatomic) id<IESLLFusePOITrackerManagerProtocol> trackerManager;

- (void)tapUserAvatar;
- (void)tapUserNameLabel;
- (void)goToUserProfileViaMethod:(id)a0;
- (void)updateWithUploaderInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end
