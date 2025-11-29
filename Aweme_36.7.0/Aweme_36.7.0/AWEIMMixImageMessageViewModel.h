@class UIImage, NSArray;

@interface AWEIMMixImageMessageViewModel : AWEIMMessageViewModel

@property (retain, nonatomic) UIImage *currentImage;
@property (nonatomic) long long imageLoadStatus;
@property (copy, nonatomic) NSArray *currentAvatarList;

- (id)coverTitle;
- (void)updateMixedImageUserAvatarList;
- (void)updateShownMixedImage;
- (void)p_updateShownMixedImageV2;
- (void)p_updateShownMixedImage;
- (void)p_updateMixedImageUserAvatarList;
- (id)configCoverURLInfo;
- (void)fetchCoverImage;
- (id)p_fetchUsersInfo;
- (void).cxx_destruct;

@end
