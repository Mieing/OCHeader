@class UIImage;

@interface AWEShareAsStoryImageAlbumParamsModel : AWEShareAsStoryParamsModel

@property (nonatomic) long long imageIndex;
@property (retain, nonatomic) UIImage *sharedImage;
@property (nonatomic) BOOL needShowImageIcon;

- (void).cxx_destruct;

@end
